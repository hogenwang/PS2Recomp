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

// Function: sub_001DB878
// Address: 0x1db878 - 0x1db9d0
void sub_001DB878_0x1db878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB878_0x1db878");
#endif

    switch (ctx->pc) {
        case 0x1db878u: goto label_1db878;
        case 0x1db87cu: goto label_1db87c;
        case 0x1db880u: goto label_1db880;
        case 0x1db884u: goto label_1db884;
        case 0x1db888u: goto label_1db888;
        case 0x1db88cu: goto label_1db88c;
        case 0x1db890u: goto label_1db890;
        case 0x1db894u: goto label_1db894;
        case 0x1db898u: goto label_1db898;
        case 0x1db89cu: goto label_1db89c;
        case 0x1db8a0u: goto label_1db8a0;
        case 0x1db8a4u: goto label_1db8a4;
        case 0x1db8a8u: goto label_1db8a8;
        case 0x1db8acu: goto label_1db8ac;
        case 0x1db8b0u: goto label_1db8b0;
        case 0x1db8b4u: goto label_1db8b4;
        case 0x1db8b8u: goto label_1db8b8;
        case 0x1db8bcu: goto label_1db8bc;
        case 0x1db8c0u: goto label_1db8c0;
        case 0x1db8c4u: goto label_1db8c4;
        case 0x1db8c8u: goto label_1db8c8;
        case 0x1db8ccu: goto label_1db8cc;
        case 0x1db8d0u: goto label_1db8d0;
        case 0x1db8d4u: goto label_1db8d4;
        case 0x1db8d8u: goto label_1db8d8;
        case 0x1db8dcu: goto label_1db8dc;
        case 0x1db8e0u: goto label_1db8e0;
        case 0x1db8e4u: goto label_1db8e4;
        case 0x1db8e8u: goto label_1db8e8;
        case 0x1db8ecu: goto label_1db8ec;
        case 0x1db8f0u: goto label_1db8f0;
        case 0x1db8f4u: goto label_1db8f4;
        case 0x1db8f8u: goto label_1db8f8;
        case 0x1db8fcu: goto label_1db8fc;
        case 0x1db900u: goto label_1db900;
        case 0x1db904u: goto label_1db904;
        case 0x1db908u: goto label_1db908;
        case 0x1db90cu: goto label_1db90c;
        case 0x1db910u: goto label_1db910;
        case 0x1db914u: goto label_1db914;
        case 0x1db918u: goto label_1db918;
        case 0x1db91cu: goto label_1db91c;
        case 0x1db920u: goto label_1db920;
        case 0x1db924u: goto label_1db924;
        case 0x1db928u: goto label_1db928;
        case 0x1db92cu: goto label_1db92c;
        case 0x1db930u: goto label_1db930;
        case 0x1db934u: goto label_1db934;
        case 0x1db938u: goto label_1db938;
        case 0x1db93cu: goto label_1db93c;
        case 0x1db940u: goto label_1db940;
        case 0x1db944u: goto label_1db944;
        case 0x1db948u: goto label_1db948;
        case 0x1db94cu: goto label_1db94c;
        case 0x1db950u: goto label_1db950;
        case 0x1db954u: goto label_1db954;
        case 0x1db958u: goto label_1db958;
        case 0x1db95cu: goto label_1db95c;
        case 0x1db960u: goto label_1db960;
        case 0x1db964u: goto label_1db964;
        case 0x1db968u: goto label_1db968;
        case 0x1db96cu: goto label_1db96c;
        case 0x1db970u: goto label_1db970;
        case 0x1db974u: goto label_1db974;
        case 0x1db978u: goto label_1db978;
        case 0x1db97cu: goto label_1db97c;
        case 0x1db980u: goto label_1db980;
        case 0x1db984u: goto label_1db984;
        case 0x1db988u: goto label_1db988;
        case 0x1db98cu: goto label_1db98c;
        case 0x1db990u: goto label_1db990;
        case 0x1db994u: goto label_1db994;
        case 0x1db998u: goto label_1db998;
        case 0x1db99cu: goto label_1db99c;
        case 0x1db9a0u: goto label_1db9a0;
        case 0x1db9a4u: goto label_1db9a4;
        case 0x1db9a8u: goto label_1db9a8;
        case 0x1db9acu: goto label_1db9ac;
        case 0x1db9b0u: goto label_1db9b0;
        case 0x1db9b4u: goto label_1db9b4;
        case 0x1db9b8u: goto label_1db9b8;
        case 0x1db9bcu: goto label_1db9bc;
        case 0x1db9c0u: goto label_1db9c0;
        case 0x1db9c4u: goto label_1db9c4;
        case 0x1db9c8u: goto label_1db9c8;
        case 0x1db9ccu: goto label_1db9cc;
        default: break;
    }

    ctx->pc = 0x1db878u;

label_1db878:
    // 0x1db878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1db878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1db87c:
    // 0x1db87c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1db87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1db880:
    // 0x1db880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db884:
    // 0x1db884: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1db884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1db888:
    // 0x1db888: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1db888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1db88c:
    // 0x1db88c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1db88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1db890:
    // 0x1db890: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1db890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1db894:
    // 0x1db894: 0x10000032  b           . + 4 + (0x32 << 2)
label_1db898:
    if (ctx->pc == 0x1DB898u) {
        ctx->pc = 0x1DB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB894u;
        // 0x1db898: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB89Cu;
        goto label_1db89c;
    }
    ctx->pc = 0x1DB894u;
    {
        const bool branch_taken_0x1db894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB894u;
        // 0x1db898: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db894) {
            ctx->pc = 0x1DB960u;
            goto label_1db960;
        }
    }
    ctx->pc = 0x1DB89Cu;
label_1db89c:
    // 0x1db89c: 0x0  nop
    ctx->pc = 0x1db89cu;
    // NOP
label_1db8a0:
    // 0x1db8a0: 0xc076326  jal         func_1D8C98
label_1db8a4:
    if (ctx->pc == 0x1DB8A4u) {
        ctx->pc = 0x1DB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8A0u;
        // 0x1db8a4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8A8u;
        goto label_1db8a8;
    }
    ctx->pc = 0x1DB8A0u;
    SET_GPR_U32(ctx, 31, 0x1DB8A8u);
    ctx->pc = 0x1DB8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8A0u;
    // 0x1db8a4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1DB8A0u, 0x1DB8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8A8u;
label_1db8a8:
    // 0x1db8a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1db8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db8ac:
    // 0x1db8ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db8b0:
    // 0x1db8b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db8b4:
    // 0x1db8b4: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
label_1db8b8:
    if (ctx->pc == 0x1DB8B8u) {
        ctx->pc = 0x1DB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8B4u;
        // 0x1db8b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8BCu;
        goto label_1db8bc;
    }
    ctx->pc = 0x1DB8B4u;
    {
        const bool branch_taken_0x1db8b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8B4u;
        // 0x1db8b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8b4) {
            ctx->pc = 0x1DB900u;
            goto label_1db900;
        }
    }
    ctx->pc = 0x1DB8BCu;
label_1db8bc:
    // 0x1db8bc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1db8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1db8c0:
    // 0x1db8c0: 0xc07337e  jal         func_1CCDF8
label_1db8c4:
    if (ctx->pc == 0x1DB8C4u) {
        ctx->pc = 0x1DB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8C0u;
        // 0x1db8c4: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8C8u;
        goto label_1db8c8;
    }
    ctx->pc = 0x1DB8C0u;
    SET_GPR_U32(ctx, 31, 0x1DB8C8u);
    ctx->pc = 0x1DB8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8C0u;
    // 0x1db8c4: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1DB8C0u, 0x1DB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8C8u;
label_1db8c8:
    // 0x1db8c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db8cc:
    // 0x1db8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db8d0:
    // 0x1db8d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db8d4:
    // 0x1db8d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1db8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1db8d8:
    // 0x1db8d8: 0x40f809  jalr        $v0
label_1db8dc:
    if (ctx->pc == 0x1DB8DCu) {
        ctx->pc = 0x1DB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8D8u;
        // 0x1db8dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8E0u;
        goto label_1db8e0;
    }
    ctx->pc = 0x1DB8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB8E0u);
        ctx->pc = 0x1DB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8D8u;
        // 0x1db8dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8D8u, 0x1DB8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB8E0u;
label_1db8e0:
    // 0x1db8e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db8e4:
    // 0x1db8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db8e8:
    // 0x1db8e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db8ec:
    // 0x1db8ec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1db8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1db8f0:
    // 0x1db8f0: 0x40f809  jalr        $v0
label_1db8f4:
    if (ctx->pc == 0x1DB8F4u) {
        ctx->pc = 0x1DB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8F0u;
        // 0x1db8f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8F8u;
        goto label_1db8f8;
    }
    ctx->pc = 0x1DB8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB8F8u);
        ctx->pc = 0x1DB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8F0u;
        // 0x1db8f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8F0u, 0x1DB8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB8F8u;
label_1db8f8:
    // 0x1db8f8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1db8fc:
    if (ctx->pc == 0x1DB8FCu) {
        ctx->pc = 0x1DB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8F8u;
        // 0x1db8fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB900u;
        goto label_1db900;
    }
    ctx->pc = 0x1DB8F8u;
    {
        const bool branch_taken_0x1db8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8F8u;
        // 0x1db8fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8f8) {
            ctx->pc = 0x1DB964u;
            goto label_1db964;
        }
    }
    ctx->pc = 0x1DB900u;
label_1db900:
    // 0x1db900: 0xc0762c0  jal         func_1D8B00
label_1db904:
    if (ctx->pc == 0x1DB904u) {
        ctx->pc = 0x1DB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB900u;
        // 0x1db904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB908u;
        goto label_1db908;
    }
    ctx->pc = 0x1DB900u;
    SET_GPR_U32(ctx, 31, 0x1DB908u);
    ctx->pc = 0x1DB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB900u;
    // 0x1db904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1DB900u, 0x1DB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB908u;
label_1db908:
    // 0x1db908: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1db908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db90c:
    // 0x1db90c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1db90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1db910:
    // 0x1db910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db914:
    // 0x1db914: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1db914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db918:
    // 0x1db918: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1db918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db91c:
    // 0x1db91c: 0xc07337e  jal         func_1CCDF8
label_1db920:
    if (ctx->pc == 0x1DB920u) {
        ctx->pc = 0x1DB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB91Cu;
        // 0x1db920: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB924u;
        goto label_1db924;
    }
    ctx->pc = 0x1DB91Cu;
    SET_GPR_U32(ctx, 31, 0x1DB924u);
    ctx->pc = 0x1DB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB91Cu;
    // 0x1db920: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1DB91Cu, 0x1DB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB924u;
label_1db924:
    // 0x1db924: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db928:
    // 0x1db928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db92c:
    // 0x1db92c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db930:
    // 0x1db930: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1db930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1db934:
    // 0x1db934: 0x40f809  jalr        $v0
label_1db938:
    if (ctx->pc == 0x1DB938u) {
        ctx->pc = 0x1DB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB934u;
        // 0x1db938: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB93Cu;
        goto label_1db93c;
    }
    ctx->pc = 0x1DB934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB93Cu);
        ctx->pc = 0x1DB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB934u;
        // 0x1db938: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB934u, 0x1DB93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB93Cu;
label_1db93c:
    // 0x1db93c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db940:
    // 0x1db940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db944:
    // 0x1db944: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1db944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db948:
    // 0x1db948: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1db948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1db94c:
    // 0x1db94c: 0x40f809  jalr        $v0
label_1db950:
    if (ctx->pc == 0x1DB950u) {
        ctx->pc = 0x1DB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB94Cu;
        // 0x1db950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB954u;
        goto label_1db954;
    }
    ctx->pc = 0x1DB94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB954u);
        ctx->pc = 0x1DB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB94Cu;
        // 0x1db950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB94Cu, 0x1DB954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB954u;
label_1db954:
    // 0x1db954: 0x10000017  b           . + 4 + (0x17 << 2)
label_1db958:
    if (ctx->pc == 0x1DB958u) {
        ctx->pc = 0x1DB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB954u;
        // 0x1db958: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB95Cu;
        goto label_1db95c;
    }
    ctx->pc = 0x1DB954u;
    {
        const bool branch_taken_0x1db954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB954u;
        // 0x1db958: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db954) {
            ctx->pc = 0x1DB9B4u;
            goto label_1db9b4;
        }
    }
    ctx->pc = 0x1DB95Cu;
label_1db95c:
    // 0x1db95c: 0x0  nop
    ctx->pc = 0x1db95cu;
    // NOP
label_1db960:
    // 0x1db960: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db964:
    // 0x1db964: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1db964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1db968:
    // 0x1db968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db96c:
    // 0x1db96c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1db96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1db970:
    // 0x1db970: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1db970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1db974:
    // 0x1db974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db978:
    // 0x1db978: 0x40f809  jalr        $v0
label_1db97c:
    if (ctx->pc == 0x1DB97Cu) {
        ctx->pc = 0x1DB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB978u;
        // 0x1db97c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB980u;
        goto label_1db980;
    }
    ctx->pc = 0x1DB978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB980u);
        ctx->pc = 0x1DB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB978u;
        // 0x1db97c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB978u, 0x1DB980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB980u;
label_1db980:
    // 0x1db980: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1db980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1db984:
    // 0x1db984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db988:
    // 0x1db988: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1db988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1db98c:
    // 0x1db98c: 0x1040ffc4  beqz        $v0, . + 4 + (-0x3C << 2)
label_1db990:
    if (ctx->pc == 0x1DB990u) {
        ctx->pc = 0x1DB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB98Cu;
        // 0x1db990: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB994u;
        goto label_1db994;
    }
    ctx->pc = 0x1DB98Cu;
    {
        const bool branch_taken_0x1db98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB98Cu;
        // 0x1db990: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db98c) {
            ctx->pc = 0x1DB8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db8a0;
        }
    }
    ctx->pc = 0x1DB994u;
label_1db994:
    // 0x1db994: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db998:
    // 0x1db998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db99c:
    // 0x1db99c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db9a0:
    // 0x1db9a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1db9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db9a4:
    // 0x1db9a4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1db9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1db9a8:
    // 0x1db9a8: 0x40f809  jalr        $v0
label_1db9ac:
    if (ctx->pc == 0x1DB9ACu) {
        ctx->pc = 0x1DB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9A8u;
        // 0x1db9ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB9B0u;
        goto label_1db9b0;
    }
    ctx->pc = 0x1DB9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB9B0u);
        ctx->pc = 0x1DB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9A8u;
        // 0x1db9ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9A8u, 0x1DB9B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB9B0u;
label_1db9b0:
    // 0x1db9b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1db9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db9b4:
    // 0x1db9b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1db9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1db9b8:
    // 0x1db9b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1db9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1db9bc:
    // 0x1db9bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1db9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1db9c0:
    // 0x1db9c0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1db9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1db9c4:
    // 0x1db9c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1db9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1db9c8:
    // 0x1db9c8: 0x3e00008  jr          $ra
label_1db9cc:
    if (ctx->pc == 0x1DB9CCu) {
        ctx->pc = 0x1DB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9C8u;
        // 0x1db9cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB9D0u;
        goto label_fallthrough_0x1db9c8;
    }
    ctx->pc = 0x1DB9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9C8u;
        // 0x1db9cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db9c8:
    ctx->pc = 0x1DB9D0u;
}
