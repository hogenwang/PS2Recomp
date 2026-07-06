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

// Function: sub_002020D8
// Address: 0x2020d8 - 0x2021f0
void sub_002020D8_0x2020d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002020D8_0x2020d8");
#endif

    switch (ctx->pc) {
        case 0x202124u: goto label_202124;
        case 0x202158u: goto label_202158;
        case 0x202174u: goto label_202174;
        case 0x202198u: goto label_202198;
        case 0x2021bcu: goto label_2021bc;
        default: break;
    }

    ctx->pc = 0x2020d8u;

    // 0x2020d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2020d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2020dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2020dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2020e0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2020e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2020e4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2020e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2020e8: 0x2453f288  addiu       $s3, $v0, -0xD78
    ctx->pc = 0x2020e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963848));
    // 0x2020ec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2020ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2020f0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2020f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2020f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2020f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020f8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2020f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2020fc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202100: 0x2465f298  addiu       $a1, $v1, -0xD68
    ctx->pc = 0x202100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963864));
    // 0x202104: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x202104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202108: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x202108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20210c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x20210cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x202110: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x202110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202114: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x202114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x202118: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x202118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20211c: 0xc08087c  jal         func_2021F0
    ctx->pc = 0x20211Cu;
    SET_GPR_U32(ctx, 31, 0x202124u);
    ctx->pc = 0x202120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20211Cu;
    // 0x202120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021F0u, 0x20211Cu, 0x202124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202124u;
label_202124:
    // 0x202124: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202128: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20212c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x20212cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x202130: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x202130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x202134: 0x24a5f2a0  addiu       $a1, $a1, -0xD60
    ctx->pc = 0x202134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
    // 0x202138: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x202138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20213c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20213Cu;
    {
        const bool branch_taken_0x20213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20213Cu;
        // 0x202140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20213c) {
            ctx->pc = 0x202150u;
            goto label_202150;
        }
    }
    ctx->pc = 0x202144u;
    // 0x202144: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x202144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x202148: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x202148u;
    {
        const bool branch_taken_0x202148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202148u;
        // 0x20214c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202148) {
            ctx->pc = 0x2021CCu;
            goto label_2021cc;
        }
    }
    ctx->pc = 0x202150u;
label_202150:
    // 0x202150: 0xc04a610  jal         func_129840
    ctx->pc = 0x202150u;
    SET_GPR_U32(ctx, 31, 0x202158u);
    ctx->pc = 0x129840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129840u, 0x202150u, 0x202158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202158u;
label_202158:
    // 0x202158: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x20215c: 0x24a5f2a8  addiu       $a1, $a1, -0xD58
    ctx->pc = 0x20215cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963880));
    // 0x202160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202164: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x202164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202168: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x202168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20216c: 0xc08087c  jal         func_2021F0
    ctx->pc = 0x20216Cu;
    SET_GPR_U32(ctx, 31, 0x202174u);
    ctx->pc = 0x202170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20216Cu;
    // 0x202170: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021F0u, 0x20216Cu, 0x202174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202174u;
label_202174:
    // 0x202174: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202178: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x202178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20217c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x20217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x202180: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202180u;
    {
        const bool branch_taken_0x202180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202180u;
        // 0x202184: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202180) {
            ctx->pc = 0x202190u;
            goto label_202190;
        }
    }
    ctx->pc = 0x202188u;
    // 0x202188: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x202188u;
    {
        const bool branch_taken_0x202188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202188u;
        // 0x20218c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202188) {
            ctx->pc = 0x2021CCu;
            goto label_2021cc;
        }
    }
    ctx->pc = 0x202190u;
label_202190:
    // 0x202190: 0xc048082  jal         func_120208
    ctx->pc = 0x202190u;
    SET_GPR_U32(ctx, 31, 0x202198u);
    ctx->pc = 0x202194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202190u;
    // 0x202194: 0xdfa40008  ld          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x202190u, 0x202198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202198u;
label_202198:
    // 0x202198: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x20219c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2021a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2021a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2021a4: 0x24a5f2b0  addiu       $a1, $a1, -0xD50
    ctx->pc = 0x2021a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963888));
    // 0x2021a8: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x2021a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2021ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2021acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2021b0: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2021b4: 0xc04a610  jal         func_129840
    ctx->pc = 0x2021B4u;
    SET_GPR_U32(ctx, 31, 0x2021BCu);
    ctx->pc = 0x2021B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021B4u;
    // 0x2021b8: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129840u, 0x2021B4u, 0x2021BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021BCu;
label_2021bc:
    // 0x2021bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2021bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2021c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2021c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2021c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2021c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2021c8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2021c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2021cc:
    // 0x2021cc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2021ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2021d0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2021d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021d4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2021d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2021d8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2021d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2021dc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2021dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2021e0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2021e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2021e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2021E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2021E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021E4u;
        // 0x2021e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2021E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2021ECu;
    // 0x2021ec: 0x0  nop
    ctx->pc = 0x2021ecu;
    // NOP
    if (ctx->pc == 0x2021ecu) { ctx->pc = 0x2021f0u; }
}
