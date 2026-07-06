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

// Function: sub_001094D8
// Address: 0x1094d8 - 0x109630
void sub_001094D8_0x1094d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001094D8_0x1094d8");
#endif

    switch (ctx->pc) {
        case 0x109520u: goto label_109520;
        case 0x109534u: goto label_109534;
        case 0x109540u: goto label_109540;
        case 0x109548u: goto label_109548;
        case 0x109554u: goto label_109554;
        case 0x109570u: goto label_109570;
        case 0x1095b4u: goto label_1095b4;
        case 0x1095c4u: goto label_1095c4;
        case 0x1095d4u: goto label_1095d4;
        case 0x1095ecu: goto label_1095ec;
        default: break;
    }

    ctx->pc = 0x1094d8u;

    // 0x1094d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1094d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1094dc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1094dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1094e0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1094e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1094e4: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x1094e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x1094e8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1094e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1094ec: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1094ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1094f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1094f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1094f4: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x1094f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1094f8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1094f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1094fc: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x1094fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x109500: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x109500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x109504: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x109504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x109508: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x109508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10950c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x10950cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109510: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x109510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x109514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109518: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x109518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10951c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_109520:
    // 0x109520: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x109520u;
    {
        const bool branch_taken_0x109520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109520u;
        // 0x109524: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109520) {
            ctx->pc = 0x109600u;
            goto label_109600;
        }
    }
    ctx->pc = 0x109528u;
    // 0x109528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10952c: 0xc04258e  jal         func_109638
    ctx->pc = 0x10952Cu;
    SET_GPR_U32(ctx, 31, 0x109534u);
    ctx->pc = 0x109530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10952Cu;
    // 0x109530: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109638u, 0x10952Cu, 0x109534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109534u;
label_109534:
    // 0x109534: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x109534u;
    {
        const bool branch_taken_0x109534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109534u;
        // 0x109538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109534) {
            ctx->pc = 0x10954Cu;
            goto label_10954c;
        }
    }
    ctx->pc = 0x10953Cu;
    // 0x10953c: 0x0  nop
    ctx->pc = 0x10953cu;
    // NOP
label_109540:
    // 0x109540: 0xc042534  jal         func_1094D0
    ctx->pc = 0x109540u;
    SET_GPR_U32(ctx, 31, 0x109548u);
    ctx->pc = 0x109544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109540u;
    // 0x109544: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1094D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094D0u, 0x109540u, 0x109548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109548u;
label_109548:
    // 0x109548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10954c:
    // 0x10954c: 0xc041c90  jal         func_107240
    ctx->pc = 0x10954Cu;
    SET_GPR_U32(ctx, 31, 0x109554u);
    ctx->pc = 0x109550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10954Cu;
    // 0x109550: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107240u, 0x10954Cu, 0x109554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109554u;
label_109554:
    // 0x109554: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x109554u;
    {
        const bool branch_taken_0x109554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x109558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109554u;
        // 0x109558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109554) {
            ctx->pc = 0x109568u;
            goto label_109568;
        }
    }
    ctx->pc = 0x10955Cu;
    // 0x10955c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x109560: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x109560u;
    {
        const bool branch_taken_0x109560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109560) {
            ctx->pc = 0x109540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109540;
        }
    }
    ctx->pc = 0x109568u;
label_109568:
    // 0x109568: 0xc041c56  jal         func_107158
    ctx->pc = 0x109568u;
    SET_GPR_U32(ctx, 31, 0x109570u);
    ctx->pc = 0x10956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109568u;
    // 0x10956c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109568u, 0x109570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109570u;
label_109570:
    // 0x109570: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109570u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109574: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x109574u;
    {
        const bool branch_taken_0x109574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x109578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109574u;
        // 0x109578: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109574) {
            ctx->pc = 0x1095ACu;
            goto label_1095ac;
        }
    }
    ctx->pc = 0x10957Cu;
    // 0x10957c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10957Cu;
    {
        const bool branch_taken_0x10957c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10957c) {
            ctx->pc = 0x109594u;
            goto label_109594;
        }
    }
    ctx->pc = 0x109584u;
    // 0x109584: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x109584u;
    {
        const bool branch_taken_0x109584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x109584) {
            ctx->pc = 0x1095CCu;
            goto label_1095cc;
        }
    }
    ctx->pc = 0x10958Cu;
    // 0x10958c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x10958Cu;
    {
        const bool branch_taken_0x10958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10958Cu;
        // 0x109590: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10958c) {
            ctx->pc = 0x109520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109520;
        }
    }
    ctx->pc = 0x109594u;
label_109594:
    // 0x109594: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x109594u;
    {
        const bool branch_taken_0x109594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x109598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109594u;
        // 0x109598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109594) {
            ctx->pc = 0x109600u;
            goto label_109600;
        }
    }
    ctx->pc = 0x10959Cu;
    // 0x10959c: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x10959Cu;
    {
        const bool branch_taken_0x10959c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x10959c) {
            ctx->pc = 0x1095BCu;
            goto label_1095bc;
        }
    }
    ctx->pc = 0x1095A4u;
    // 0x1095a4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1095A4u;
    {
        const bool branch_taken_0x1095a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095A4u;
        // 0x1095a8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095a4) {
            ctx->pc = 0x109520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109520;
        }
    }
    ctx->pc = 0x1095ACu;
label_1095ac:
    // 0x1095ac: 0xc042278  jal         func_1089E0
    ctx->pc = 0x1095ACu;
    SET_GPR_U32(ctx, 31, 0x1095B4u);
    ctx->pc = 0x1095B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095ACu;
    // 0x1095b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1089E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1089E0u, 0x1095ACu, 0x1095B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095B4u;
label_1095b4:
    // 0x1095b4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1095B4u;
    {
        const bool branch_taken_0x1095b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095B4u;
        // 0x1095b8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095b4) {
            ctx->pc = 0x109520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109520;
        }
    }
    ctx->pc = 0x1095BCu;
label_1095bc:
    // 0x1095bc: 0xc042324  jal         func_108C90
    ctx->pc = 0x1095BCu;
    SET_GPR_U32(ctx, 31, 0x1095C4u);
    ctx->pc = 0x1095C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095BCu;
    // 0x1095c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C90u, 0x1095BCu, 0x1095C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095C4u;
label_1095c4:
    // 0x1095c4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1095C4u;
    {
        const bool branch_taken_0x1095c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095C4u;
        // 0x1095c8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095c4) {
            ctx->pc = 0x109520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109520;
        }
    }
    ctx->pc = 0x1095CCu;
label_1095cc:
    // 0x1095cc: 0xc04234c  jal         func_108D30
    ctx->pc = 0x1095CCu;
    SET_GPR_U32(ctx, 31, 0x1095D4u);
    ctx->pc = 0x1095D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095CCu;
    // 0x1095d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D30u, 0x1095CCu, 0x1095D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095D4u;
label_1095d4:
    // 0x1095d4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x1095d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x1095d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1095d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095dc: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1095dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1095e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1095e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1095e4: 0xc042a04  jal         func_10A810
    ctx->pc = 0x1095E4u;
    SET_GPR_U32(ctx, 31, 0x1095ECu);
    ctx->pc = 0x1095E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095E4u;
    // 0x1095e8: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A810u, 0x1095E4u, 0x1095ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095ECu;
label_1095ec:
    // 0x1095ec: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1095ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1095f0: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x1095f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1095f4: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x1095f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x1095f8: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x1095f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x1095fc: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1095fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_109600:
    // 0x109600: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x109600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109604: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x109604u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109608: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x109608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10960c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10960cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109610: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x109610u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109614: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x109614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109618: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x109618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10961c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10961cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109620: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x109620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109624: 0x3e00008  jr          $ra
    ctx->pc = 0x109624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109624u;
        // 0x109628: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10962Cu;
    // 0x10962c: 0x0  nop
    ctx->pc = 0x10962cu;
    // NOP
}
