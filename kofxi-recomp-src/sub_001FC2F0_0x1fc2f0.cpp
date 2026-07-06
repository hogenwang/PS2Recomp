#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FC2F0
// Address: 0x1fc2f0 - 0x1fc420
void sub_001FC2F0_0x1fc2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC2F0_0x1fc2f0");
#endif

    switch (ctx->pc) {
        case 0x1fc31cu: goto label_1fc31c;
        case 0x1fc348u: goto label_1fc348;
        case 0x1fc398u: goto label_1fc398;
        case 0x1fc3c8u: goto label_1fc3c8;
        case 0x1fc3dcu: goto label_1fc3dc;
        case 0x1fc408u: goto label_1fc408;
        default: break;
    }

    ctx->pc = 0x1fc2f0u;

    // 0x1fc2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc2f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc2f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc300: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fc300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc304: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc308: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fc308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc30c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fc30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fc310: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fc310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fc314: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FC314u;
    SET_GPR_U32(ctx, 31, 0x1FC31Cu);
    ctx->pc = 0x1FC318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC314u;
            // 0x1fc318: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC31Cu; }
        if (ctx->pc != 0x1FC31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC31Cu; }
        if (ctx->pc != 0x1FC31Cu) { return; }
    }
    ctx->pc = 0x1FC31Cu;
label_1fc31c:
    // 0x1fc31c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fc31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fc320: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC320u;
    {
        const bool branch_taken_0x1fc320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC320u;
            // 0x1fc324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc320) {
            ctx->pc = 0x1FC348u;
            goto label_1fc348;
        }
    }
    ctx->pc = 0x1FC328u;
    // 0x1fc328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc32c: 0x34a50129  ori         $a1, $a1, 0x129
    ctx->pc = 0x1fc32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)297);
    // 0x1fc330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc334: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc338: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fc338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc33c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fc33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc340: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FC340u;
    ctx->pc = 0x1FC344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC340u;
            // 0x1fc344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FC348u;
label_1fc348:
    // 0x1fc348: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC348u;
    {
        const bool branch_taken_0x1fc348 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC348u;
            // 0x1fc34c: 0x26040d88  addiu       $a0, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc348) {
            ctx->pc = 0x1FC368u;
            goto label_1fc368;
        }
    }
    ctx->pc = 0x1FC350u;
    // 0x1fc350: 0xac9102e8  sw          $s1, 0x2E8($a0)
    ctx->pc = 0x1fc350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 744), GPR_U32(ctx, 17));
    // 0x1fc354: 0xac9202d4  sw          $s2, 0x2D4($a0)
    ctx->pc = 0x1fc354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 18));
    // 0x1fc358: 0xac9302e4  sw          $s3, 0x2E4($a0)
    ctx->pc = 0x1fc358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 19));
    // 0x1fc35c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC35Cu;
    {
        const bool branch_taken_0x1fc35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC35Cu;
            // 0x1fc360: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc35c) {
            ctx->pc = 0x1FC378u;
            goto label_1fc378;
        }
    }
    ctx->pc = 0x1FC364u;
    // 0x1fc364: 0x0  nop
    ctx->pc = 0x1fc364u;
    // NOP
label_1fc368:
    // 0x1fc368: 0xac9102e8  sw          $s1, 0x2E8($a0)
    ctx->pc = 0x1fc368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 744), GPR_U32(ctx, 17));
    // 0x1fc36c: 0xac9302e4  sw          $s3, 0x2E4($a0)
    ctx->pc = 0x1fc36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 19));
    // 0x1fc370: 0xac8002d4  sw          $zero, 0x2D4($a0)
    ctx->pc = 0x1fc370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 0));
    // 0x1fc374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc378:
    // 0x1fc378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc37c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc37cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc384: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fc384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fc388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc38c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC38Cu;
            // 0x1fc390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC394u;
    // 0x1fc394: 0x0  nop
    ctx->pc = 0x1fc394u;
    // NOP
label_1fc398:
    // 0x1fc398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc39c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc3a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc3a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc3a8: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC3A8u;
    {
        const bool branch_taken_0x1fc3a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC3A8u;
            // 0x1fc3ac: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3a8) {
            ctx->pc = 0x1FC408u;
            goto label_1fc408;
        }
    }
    ctx->pc = 0x1FC3B0u;
    // 0x1fc3b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fc3b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fc3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3b8: 0x2451174c  addiu       $s1, $v0, 0x174C
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
    // 0x1fc3bc: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1fc3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fc3c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc3c4: 0x0  nop
    ctx->pc = 0x1fc3c4u;
    // NOP
label_1fc3c8:
    // 0x1fc3c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1fc3cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC3CCu;
    {
        const bool branch_taken_0x1fc3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC3CCu;
            // 0x1fc3d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3cc) {
            ctx->pc = 0x1FC3E0u;
            goto label_1fc3e0;
        }
    }
    ctx->pc = 0x1FC3D4u;
    // 0x1fc3d4: 0xc07f108  jal         func_1FC420
    ctx->pc = 0x1FC3D4u;
    SET_GPR_U32(ctx, 31, 0x1FC3DCu);
    ctx->pc = 0x1FC420u;
    if (runtime->hasFunction(0x1FC420u)) {
        auto targetFn = runtime->lookupFunction(0x1FC420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3DCu; }
        if (ctx->pc != 0x1FC3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC420_0x1fc420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3DCu; }
        if (ctx->pc != 0x1FC3DCu) { return; }
    }
    ctx->pc = 0x1FC3DCu;
label_1fc3dc:
    // 0x1fc3dc: 0x42900b  movn        $s2, $v0, $v0
    ctx->pc = 0x1fc3dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_1fc3e0:
    // 0x1fc3e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fc3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fc3e4: 0x603fff8  bgezl       $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FC3E4u;
    {
        const bool branch_taken_0x1fc3e4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1fc3e4) {
            ctx->pc = 0x1FC3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC3E4u;
            // 0x1fc3e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC3C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fc3c8;
        }
    }
    ctx->pc = 0x1FC3ECu;
    // 0x1fc3ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fc3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc3f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc3fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fc3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc400: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC400u;
            // 0x1fc404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC408u;
label_1fc408:
    // 0x1fc408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc40c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc414: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fc414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc418: 0x807f108  j           func_1FC420
    ctx->pc = 0x1FC418u;
    ctx->pc = 0x1FC41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC418u;
            // 0x1fc41c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC420u;
    if (runtime->hasFunction(0x1FC420u)) {
        auto targetFn = runtime->lookupFunction(0x1FC420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FC420_0x1fc420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FC420u;
    ctx->pc = 0x1fc420u;
}
