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

// Function: sub_001502A0
// Address: 0x1502a0 - 0x1503a0
void sub_001502A0_0x1502a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001502A0_0x1502a0");
#endif

    switch (ctx->pc) {
        case 0x150300u: goto label_150300;
        case 0x150314u: goto label_150314;
        case 0x15032cu: goto label_15032c;
        case 0x150354u: goto label_150354;
        case 0x150370u: goto label_150370;
        case 0x15038cu: goto label_15038c;
        default: break;
    }

    ctx->pc = 0x1502a0u;

    // 0x1502a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1502a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1502a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1502a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1502a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1502a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1502ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1502acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1502b0: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1502B0u;
    {
        const bool branch_taken_0x1502b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1502B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502B0u;
        // 0x1502b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502b0) {
            ctx->pc = 0x150378u;
            goto label_150378;
        }
    }
    ctx->pc = 0x1502B8u;
    // 0x1502b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1502b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1502bc: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1502BCu;
    {
        const bool branch_taken_0x1502bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1502bc) {
            ctx->pc = 0x15035Cu;
            goto label_15035c;
        }
    }
    ctx->pc = 0x1502C4u;
    // 0x1502c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1502c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1502c8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1502C8u;
    {
        const bool branch_taken_0x1502c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1502c8) {
            ctx->pc = 0x150308u;
            goto label_150308;
        }
    }
    ctx->pc = 0x1502D0u;
    // 0x1502d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1502d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1502d4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1502D4u;
    {
        const bool branch_taken_0x1502d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1502d4) {
            ctx->pc = 0x1502ECu;
            goto label_1502ec;
        }
    }
    ctx->pc = 0x1502DCu;
    // 0x1502dc: 0x5080002c  beql        $a0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1502DCu;
    {
        const bool branch_taken_0x1502dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502dc) {
            ctx->pc = 0x1502E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1502DCu;
            // 0x1502e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150390u;
            goto label_150390;
        }
    }
    ctx->pc = 0x1502E4u;
    // 0x1502e4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1502E4u;
    {
        const bool branch_taken_0x1502e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502e4) {
            ctx->pc = 0x15038Cu;
            goto label_15038c;
        }
    }
    ctx->pc = 0x1502ECu;
label_1502ec:
    // 0x1502ec: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x1502ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x1502f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1502f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502f4: 0x24a5ef40  addiu       $a1, $a1, -0x10C0
    ctx->pc = 0x1502f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963008));
    // 0x1502f8: 0xc067dc8  jal         func_19F720
    ctx->pc = 0x1502F8u;
    SET_GPR_U32(ctx, 31, 0x150300u);
    ctx->pc = 0x1502FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502F8u;
    // 0x1502fc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F720u, 0x1502F8u, 0x150300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150300u;
label_150300:
    // 0x150300: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x150300u;
    {
        const bool branch_taken_0x150300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150300) {
            ctx->pc = 0x15038Cu;
            goto label_15038c;
        }
    }
    ctx->pc = 0x150308u;
label_150308:
    // 0x150308: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x150308u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x15030c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15030cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150310: 0x2610ef30  addiu       $s0, $s0, -0x10D0
    ctx->pc = 0x150310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962992));
label_150314:
    // 0x150314: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x150314u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150318: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x150318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15031c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15031Cu;
    {
        const bool branch_taken_0x15031c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15031c) {
            ctx->pc = 0x150330u;
            goto label_150330;
        }
    }
    ctx->pc = 0x150324u;
    // 0x150324: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x150324u;
    SET_GPR_U32(ctx, 31, 0x15032Cu);
    ctx->pc = 0x1507A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507A0u, 0x150324u, 0x15032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15032Cu;
label_15032c:
    // 0x15032c: 0x0  nop
    ctx->pc = 0x15032cu;
    // NOP
label_150330:
    // 0x150330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x150330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x150334: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x150334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x150338: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x150338u;
    {
        const bool branch_taken_0x150338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150338u;
        // 0x15033c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150338) {
            ctx->pc = 0x150314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150314;
        }
    }
    ctx->pc = 0x150340u;
    // 0x150340: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x150340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x150344: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x150344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150348: 0x24a5ef30  addiu       $a1, $a1, -0x10D0
    ctx->pc = 0x150348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962992));
    // 0x15034c: 0xc067dc8  jal         func_19F720
    ctx->pc = 0x15034Cu;
    SET_GPR_U32(ctx, 31, 0x150354u);
    ctx->pc = 0x150350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15034Cu;
    // 0x150350: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F720u, 0x15034Cu, 0x150354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150354u;
label_150354:
    // 0x150354: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x150354u;
    {
        const bool branch_taken_0x150354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150354) {
            ctx->pc = 0x15038Cu;
            goto label_15038c;
        }
    }
    ctx->pc = 0x15035Cu;
label_15035c:
    // 0x15035c: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x15035cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x150360: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x150360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150364: 0x24a5ee90  addiu       $a1, $a1, -0x1170
    ctx->pc = 0x150364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    // 0x150368: 0xc067dc8  jal         func_19F720
    ctx->pc = 0x150368u;
    SET_GPR_U32(ctx, 31, 0x150370u);
    ctx->pc = 0x15036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150368u;
    // 0x15036c: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F720u, 0x150368u, 0x150370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150370u;
label_150370:
    // 0x150370: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x150370u;
    {
        const bool branch_taken_0x150370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150370) {
            ctx->pc = 0x15038Cu;
            goto label_15038c;
        }
    }
    ctx->pc = 0x150378u;
label_150378:
    // 0x150378: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x150378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x15037c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150380: 0x24a5ecd0  addiu       $a1, $a1, -0x1330
    ctx->pc = 0x150380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    // 0x150384: 0xc067dc8  jal         func_19F720
    ctx->pc = 0x150384u;
    SET_GPR_U32(ctx, 31, 0x15038Cu);
    ctx->pc = 0x150388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150384u;
    // 0x150388: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F720u, 0x150384u, 0x15038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15038Cu;
label_15038c:
    // 0x15038c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_150390:
    // 0x150390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150398: 0x3e00008  jr          $ra
    ctx->pc = 0x150398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150398u;
        // 0x15039c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1503A0u;
}
