#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F1D8
// Address: 0x27f1d8 - 0x27f3c8
void sub_0027F1D8_0x27f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F1D8_0x27f1d8");
#endif

    switch (ctx->pc) {
        case 0x27f218u: goto label_27f218;
        case 0x27f24cu: goto label_27f24c;
        case 0x27f2d4u: goto label_27f2d4;
        case 0x27f2f4u: goto label_27f2f4;
        case 0x27f340u: goto label_27f340;
        case 0x27f37cu: goto label_27f37c;
        case 0x27f3a0u: goto label_27f3a0;
        default: break;
    }

    ctx->pc = 0x27f1d8u;

    // 0x27f1d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27f1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27f1dc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x27f1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x27f1e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x27f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x27f1e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27f1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1e8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x27f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27f1ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27f1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1f0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27f1f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27f1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27f1fc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F1FCu;
    {
        const bool branch_taken_0x27f1fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1FCu;
        // 0x27f200: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1fc) {
            ctx->pc = 0x27F210u;
            goto label_27f210;
        }
    }
    ctx->pc = 0x27F204u;
    // 0x27f204: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f208: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F208u;
    {
        const bool branch_taken_0x27f208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F208u;
        // 0x27f20c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f208) {
            ctx->pc = 0x27F22Cu;
            goto label_27f22c;
        }
    }
    ctx->pc = 0x27F210u;
label_27f210:
    // 0x27f210: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x27F210u;
    SET_GPR_U32(ctx, 31, 0x27F218u);
    ctx->pc = 0x27F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F210u;
    // 0x27f214: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BC8u, 0x27F210u, 0x27F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F218u;
label_27f218:
    // 0x27f218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f21c: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F21Cu;
    {
        const bool branch_taken_0x27f21c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f21c) {
            ctx->pc = 0x27F220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F21Cu;
            // 0x27f220: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F230u;
            goto label_27f230;
        }
    }
    ctx->pc = 0x27F224u;
    // 0x27f224: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x27F224u;
    {
        const bool branch_taken_0x27f224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F224u;
        // 0x27f228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f224) {
            ctx->pc = 0x27F3A4u;
            goto label_27f3a4;
        }
    }
    ctx->pc = 0x27F22Cu;
label_27f22c:
    // 0x27f22c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27f230:
    // 0x27f230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f234: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x27f234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x27f238: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x27f238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f23c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27f240: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x27f240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x27f244: 0xc0a0554  jal         func_281550
    ctx->pc = 0x27F244u;
    SET_GPR_U32(ctx, 31, 0x27F24Cu);
    ctx->pc = 0x27F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F244u;
    // 0x27f248: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281550u, 0x27F244u, 0x27F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F24Cu;
label_27f24c:
    // 0x27f24c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x27f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x27f250: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x27F250u;
    {
        const bool branch_taken_0x27f250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F250u;
        // 0x27f254: 0x24120065  addiu       $s2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f250) {
            ctx->pc = 0x27F364u;
            goto label_27f364;
        }
    }
    ctx->pc = 0x27F258u;
    // 0x27f258: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x27f258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f25c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27f260: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x27f260u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f264: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x27f264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x27f268: 0x222102f  dsubu       $v0, $s1, $v0
    ctx->pc = 0x27f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
    // 0x27f26c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x27f26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27f270: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x27F270u;
    {
        const bool branch_taken_0x27f270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F270u;
        // 0x27f274: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f270) {
            ctx->pc = 0x27F364u;
            goto label_27f364;
        }
    }
    ctx->pc = 0x27F278u;
    // 0x27f278: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f27c: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27F27Cu;
    {
        const bool branch_taken_0x27f27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F27Cu;
        // 0x27f280: 0x24120074  addiu       $s2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f27c) {
            ctx->pc = 0x27F364u;
            goto label_27f364;
        }
    }
    ctx->pc = 0x27F284u;
    // 0x27f284: 0x18800037  blez        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27F284u;
    {
        const bool branch_taken_0x27f284 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F284u;
        // 0x27f288: 0x24120086  addiu       $s2, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f284) {
            ctx->pc = 0x27F364u;
            goto label_27f364;
        }
    }
    ctx->pc = 0x27F28Cu;
    // 0x27f28c: 0x90d20000  lbu         $s2, 0x0($a2)
    ctx->pc = 0x27f28cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27f290: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x27f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27f294: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27f294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27f298: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x27f298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x27f29c: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x27f29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x27f2a0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x27f2a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27f2a4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x27f2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x27f2a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x27f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x27f2ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27f2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27f2b0: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x27f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x27f2b4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x27f2b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f2b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27f2b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2bc: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x27f2bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x27f2c0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x27f2c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27f2c4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x27F2C4u;
    {
        const bool branch_taken_0x27f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2C4u;
        // 0x27f2c8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2c4) {
            ctx->pc = 0x27F324u;
            goto label_27f324;
        }
    }
    ctx->pc = 0x27F2CCu;
    // 0x27f2cc: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x27F2CCu;
    SET_GPR_U32(ctx, 31, 0x27F2D4u);
    ctx->pc = 0x27F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2CCu;
    // 0x27f2d0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x27F2CCu, 0x27F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2D4u;
label_27f2d4:
    // 0x27f2d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2d8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F2D8u;
    {
        const bool branch_taken_0x27f2d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2D8u;
        // 0x27f2dc: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2d8) {
            ctx->pc = 0x27F2E8u;
            goto label_27f2e8;
        }
    }
    ctx->pc = 0x27F2E0u;
    // 0x27f2e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27F2E0u;
    {
        const bool branch_taken_0x27f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2E0u;
        // 0x27f2e4: 0x24120021  addiu       $s2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2e0) {
            ctx->pc = 0x27F364u;
            goto label_27f364;
        }
    }
    ctx->pc = 0x27F2E8u;
label_27f2e8:
    // 0x27f2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2ec: 0xc049c48  jal         func_127120
    ctx->pc = 0x27F2ECu;
    SET_GPR_U32(ctx, 31, 0x27F2F4u);
    ctx->pc = 0x27F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2ECu;
    // 0x27f2f0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x27F2ECu, 0x27F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2F4u;
label_27f2f4:
    // 0x27f2f4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x27f2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f2f8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f2fc: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x27f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x27f300: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x27f300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x27f304: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x27f304u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x27f308: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f30c: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x27f30cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x27f310: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f314: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x27f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27f318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f31c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27F31Cu;
    {
        const bool branch_taken_0x27f31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F31Cu;
        // 0x27f320: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f31c) {
            ctx->pc = 0x27F32Cu;
            goto label_27f32c;
        }
    }
    ctx->pc = 0x27F324u;
label_27f324:
    // 0x27f324: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x27f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f328: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27f328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f32c:
    // 0x27f32c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x27f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27f330: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F330u;
    {
        const bool branch_taken_0x27f330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F330u;
        // 0x27f334: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f330) {
            ctx->pc = 0x27F340u;
            goto label_27f340;
        }
    }
    ctx->pc = 0x27F338u;
    // 0x27f338: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x27F338u;
    SET_GPR_U32(ctx, 31, 0x27F340u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x27F338u, 0x27F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F340u;
label_27f340:
    // 0x27f340: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f344: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x27f344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x27f348: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x27F348u;
    {
        const bool branch_taken_0x27f348 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F348u;
        // 0x27f34c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f348) {
            ctx->pc = 0x27F354u;
            goto label_27f354;
        }
    }
    ctx->pc = 0x27F350u;
    // 0x27f350: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x27f350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_27f354:
    // 0x27f354: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27f358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f35c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27F35Cu;
    {
        const bool branch_taken_0x27f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F35Cu;
        // 0x27f360: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f35c) {
            ctx->pc = 0x27F3A4u;
            goto label_27f3a4;
        }
    }
    ctx->pc = 0x27F364u;
label_27f364:
    // 0x27f364: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27f364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f368: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27f368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27f36c: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x27f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x27f370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27f370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f374: 0xc0a5648  jal         func_295920
    ctx->pc = 0x27F374u;
    SET_GPR_U32(ctx, 31, 0x27F37Cu);
    ctx->pc = 0x27F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F374u;
    // 0x27f378: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x27F374u, 0x27F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F37Cu;
label_27f37c:
    // 0x27f37c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27F37Cu;
    {
        const bool branch_taken_0x27f37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F37Cu;
        // 0x27f380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f37c) {
            ctx->pc = 0x27F3A4u;
            goto label_27f3a4;
        }
    }
    ctx->pc = 0x27F384u;
    // 0x27f384: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F384u;
    {
        const bool branch_taken_0x27f384 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f384) {
            ctx->pc = 0x27F398u;
            goto label_27f398;
        }
    }
    ctx->pc = 0x27F38Cu;
    // 0x27f38c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f390: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F390u;
    {
        const bool branch_taken_0x27f390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x27F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F390u;
        // 0x27f394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f390) {
            ctx->pc = 0x27F3A4u;
            goto label_27f3a4;
        }
    }
    ctx->pc = 0x27F398u;
label_27f398:
    // 0x27f398: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x27F398u;
    SET_GPR_U32(ctx, 31, 0x27F3A0u);
    ctx->pc = 0x27F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F398u;
    // 0x27f39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x27F398u, 0x27F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3A0u;
label_27f3a0:
    // 0x27f3a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27f3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f3a4:
    // 0x27f3a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27f3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f3a8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x27f3a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f3ac: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x27f3acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f3b0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27f3b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f3b4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x27f3b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f3b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27f3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x27F3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3BCu;
        // 0x27f3c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F3C4u;
    // 0x27f3c4: 0x0  nop
    ctx->pc = 0x27f3c4u;
    // NOP
}
