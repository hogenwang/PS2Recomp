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

// Function: sub_002968A0
// Address: 0x2968a0 - 0x296918
void sub_002968A0_0x2968a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002968A0_0x2968a0");
#endif

    switch (ctx->pc) {
        case 0x2968a0u: goto label_2968a0;
        case 0x2968a4u: goto label_2968a4;
        case 0x2968a8u: goto label_2968a8;
        case 0x2968acu: goto label_2968ac;
        case 0x2968b0u: goto label_2968b0;
        case 0x2968b4u: goto label_2968b4;
        case 0x2968b8u: goto label_2968b8;
        case 0x2968bcu: goto label_2968bc;
        case 0x2968c0u: goto label_2968c0;
        case 0x2968c4u: goto label_2968c4;
        case 0x2968c8u: goto label_2968c8;
        case 0x2968ccu: goto label_2968cc;
        case 0x2968d0u: goto label_2968d0;
        case 0x2968d4u: goto label_2968d4;
        case 0x2968d8u: goto label_2968d8;
        case 0x2968dcu: goto label_2968dc;
        case 0x2968e0u: goto label_2968e0;
        case 0x2968e4u: goto label_2968e4;
        case 0x2968e8u: goto label_2968e8;
        case 0x2968ecu: goto label_2968ec;
        case 0x2968f0u: goto label_2968f0;
        case 0x2968f4u: goto label_2968f4;
        case 0x2968f8u: goto label_2968f8;
        case 0x2968fcu: goto label_2968fc;
        case 0x296900u: goto label_296900;
        case 0x296904u: goto label_296904;
        case 0x296908u: goto label_296908;
        case 0x29690cu: goto label_29690c;
        case 0x296910u: goto label_296910;
        case 0x296914u: goto label_296914;
        default: break;
    }

    ctx->pc = 0x2968a0u;

label_2968a0:
    // 0x2968a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2968a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2968a4:
    // 0x2968a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2968a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2968a8:
    // 0x2968a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2968a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2968ac:
    // 0x2968ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2968acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2968b0:
    // 0x2968b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2968b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2968b4:
    // 0x2968b4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2968b8:
    if (ctx->pc == 0x2968B8u) {
        ctx->pc = 0x2968B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968B4u;
        // 0x2968b8: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2968BCu;
        goto label_2968bc;
    }
    ctx->pc = 0x2968B4u;
    {
        const bool branch_taken_0x2968b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2968b4) {
            ctx->pc = 0x2968B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2968B4u;
            // 0x2968b8: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2968D4u;
            goto label_2968d4;
        }
    }
    ctx->pc = 0x2968BCu;
label_2968bc:
    // 0x2968bc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2968bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2968c0:
    // 0x2968c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2968c4:
    if (ctx->pc == 0x2968C4u) {
        ctx->pc = 0x2968C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968C0u;
        // 0x2968c4: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2968C8u;
        goto label_2968c8;
    }
    ctx->pc = 0x2968C0u;
    {
        const bool branch_taken_0x2968c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2968c0) {
            ctx->pc = 0x2968C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2968C0u;
            // 0x2968c4: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2968D4u;
            goto label_2968d4;
        }
    }
    ctx->pc = 0x2968C8u;
label_2968c8:
    // 0x2968c8: 0x40f809  jalr        $v0
label_2968cc:
    if (ctx->pc == 0x2968CCu) {
        ctx->pc = 0x2968D0u;
        goto label_2968d0;
    }
    ctx->pc = 0x2968C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2968D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2968C8u, 0x2968D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2968D0u;
label_2968d0:
    // 0x2968d0: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x2968d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2968d4:
    // 0x2968d4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2968d8:
    if (ctx->pc == 0x2968D8u) {
        ctx->pc = 0x2968D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968D4u;
        // 0x2968d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2968DCu;
        goto label_2968dc;
    }
    ctx->pc = 0x2968D4u;
    {
        const bool branch_taken_0x2968d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2968d4) {
            ctx->pc = 0x2968D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2968D4u;
            // 0x2968d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2968FCu;
            goto label_2968fc;
        }
    }
    ctx->pc = 0x2968DCu;
label_2968dc:
    // 0x2968dc: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x2968dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2968e0:
    // 0x2968e0: 0xc049cb6  jal         func_1272D8
label_2968e4:
    if (ctx->pc == 0x2968E4u) {
        ctx->pc = 0x2968E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968E0u;
        // 0x2968e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2968E8u;
        goto label_2968e8;
    }
    ctx->pc = 0x2968E0u;
    SET_GPR_U32(ctx, 31, 0x2968E8u);
    ctx->pc = 0x2968E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968E0u;
    // 0x2968e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2968E0u, 0x2968E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968E8u;
label_2968e8:
    // 0x2968e8: 0xc0a8c0a  jal         func_2A3028
label_2968ec:
    if (ctx->pc == 0x2968ECu) {
        ctx->pc = 0x2968ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968E8u;
        // 0x2968ec: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2968F0u;
        goto label_2968f0;
    }
    ctx->pc = 0x2968E8u;
    SET_GPR_U32(ctx, 31, 0x2968F0u);
    ctx->pc = 0x2968ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968E8u;
    // 0x2968ec: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2968E8u, 0x2968F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968F0u;
label_2968f0:
    // 0x2968f0: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2968f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_2968f4:
    // 0x2968f4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2968f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_2968f8:
    // 0x2968f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2968f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2968fc:
    // 0x2968fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2968fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_296900:
    // 0x296900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296904:
    // 0x296904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296908:
    // 0x296908: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x296908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_29690c:
    // 0x29690c: 0x8049cb6  j           func_1272D8
label_296910:
    if (ctx->pc == 0x296910u) {
        ctx->pc = 0x296910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29690Cu;
        // 0x296910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296914u;
        goto label_296914;
    }
    ctx->pc = 0x29690Cu;
    ctx->pc = 0x296910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29690Cu;
    // 0x296910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x296914u;
label_296914:
    // 0x296914: 0x0  nop
    ctx->pc = 0x296914u;
    // NOP
}
