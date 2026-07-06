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

// Function: sub_002B0168
// Address: 0x2b0168 - 0x2b0218
void sub_002B0168_0x2b0168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0168_0x2b0168");
#endif

    switch (ctx->pc) {
        case 0x2b0168u: goto label_2b0168;
        case 0x2b016cu: goto label_2b016c;
        case 0x2b0170u: goto label_2b0170;
        case 0x2b0174u: goto label_2b0174;
        case 0x2b0178u: goto label_2b0178;
        case 0x2b017cu: goto label_2b017c;
        case 0x2b0180u: goto label_2b0180;
        case 0x2b0184u: goto label_2b0184;
        case 0x2b0188u: goto label_2b0188;
        case 0x2b018cu: goto label_2b018c;
        case 0x2b0190u: goto label_2b0190;
        case 0x2b0194u: goto label_2b0194;
        case 0x2b0198u: goto label_2b0198;
        case 0x2b019cu: goto label_2b019c;
        case 0x2b01a0u: goto label_2b01a0;
        case 0x2b01a4u: goto label_2b01a4;
        case 0x2b01a8u: goto label_2b01a8;
        case 0x2b01acu: goto label_2b01ac;
        case 0x2b01b0u: goto label_2b01b0;
        case 0x2b01b4u: goto label_2b01b4;
        case 0x2b01b8u: goto label_2b01b8;
        case 0x2b01bcu: goto label_2b01bc;
        case 0x2b01c0u: goto label_2b01c0;
        case 0x2b01c4u: goto label_2b01c4;
        case 0x2b01c8u: goto label_2b01c8;
        case 0x2b01ccu: goto label_2b01cc;
        case 0x2b01d0u: goto label_2b01d0;
        case 0x2b01d4u: goto label_2b01d4;
        case 0x2b01d8u: goto label_2b01d8;
        case 0x2b01dcu: goto label_2b01dc;
        case 0x2b01e0u: goto label_2b01e0;
        case 0x2b01e4u: goto label_2b01e4;
        case 0x2b01e8u: goto label_2b01e8;
        case 0x2b01ecu: goto label_2b01ec;
        case 0x2b01f0u: goto label_2b01f0;
        case 0x2b01f4u: goto label_2b01f4;
        case 0x2b01f8u: goto label_2b01f8;
        case 0x2b01fcu: goto label_2b01fc;
        case 0x2b0200u: goto label_2b0200;
        case 0x2b0204u: goto label_2b0204;
        case 0x2b0208u: goto label_2b0208;
        case 0x2b020cu: goto label_2b020c;
        case 0x2b0210u: goto label_2b0210;
        case 0x2b0214u: goto label_2b0214;
        default: break;
    }

    ctx->pc = 0x2b0168u;

label_2b0168:
    // 0x2b0168: 0x3e00008  jr          $ra
label_2b016c:
    if (ctx->pc == 0x2B016Cu) {
        ctx->pc = 0x2B016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0168u;
        // 0x2b016c: 0x8c8200b8  lw          $v0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0170u;
        goto label_2b0170;
    }
    ctx->pc = 0x2B0168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0168u;
        // 0x2b016c: 0x8c8200b8  lw          $v0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0170u;
label_2b0170:
    // 0x2b0170: 0x3e00008  jr          $ra
label_2b0174:
    if (ctx->pc == 0x2B0174u) {
        ctx->pc = 0x2B0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0170u;
        // 0x2b0174: 0x8c8200bc  lw          $v0, 0xBC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0178u;
        goto label_2b0178;
    }
    ctx->pc = 0x2B0170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0170u;
        // 0x2b0174: 0x8c8200bc  lw          $v0, 0xBC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0178u;
label_2b0178:
    // 0x2b0178: 0x3e00008  jr          $ra
label_2b017c:
    if (ctx->pc == 0x2B017Cu) {
        ctx->pc = 0x2B017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0178u;
        // 0x2b017c: 0x8c8200ac  lw          $v0, 0xAC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0180u;
        goto label_2b0180;
    }
    ctx->pc = 0x2B0178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0178u;
        // 0x2b017c: 0x8c8200ac  lw          $v0, 0xAC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0180u;
label_2b0180:
    // 0x2b0180: 0x3e00008  jr          $ra
label_2b0184:
    if (ctx->pc == 0x2B0184u) {
        ctx->pc = 0x2B0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0180u;
        // 0x2b0184: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0188u;
        goto label_2b0188;
    }
    ctx->pc = 0x2B0180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0180u;
        // 0x2b0184: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0188u;
label_2b0188:
    // 0x2b0188: 0x3e00008  jr          $ra
label_2b018c:
    if (ctx->pc == 0x2B018Cu) {
        ctx->pc = 0x2B018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0188u;
        // 0x2b018c: 0x8c8200b0  lw          $v0, 0xB0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0190u;
        goto label_2b0190;
    }
    ctx->pc = 0x2B0188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0188u;
        // 0x2b018c: 0x8c8200b0  lw          $v0, 0xB0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0190u;
label_2b0190:
    // 0x2b0190: 0xac8600bc  sw          $a2, 0xBC($a0)
    ctx->pc = 0x2b0190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 6));
label_2b0194:
    // 0x2b0194: 0x3e00008  jr          $ra
label_2b0198:
    if (ctx->pc == 0x2B0198u) {
        ctx->pc = 0x2B0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0194u;
        // 0x2b0198: 0xac8500b4  sw          $a1, 0xB4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B019Cu;
        goto label_2b019c;
    }
    ctx->pc = 0x2B0194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0194u;
        // 0x2b0198: 0xac8500b4  sw          $a1, 0xB4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B019Cu;
label_2b019c:
    // 0x2b019c: 0x0  nop
    ctx->pc = 0x2b019cu;
    // NOP
label_2b01a0:
    // 0x2b01a0: 0x3e00008  jr          $ra
label_2b01a4:
    if (ctx->pc == 0x2B01A4u) {
        ctx->pc = 0x2B01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01A0u;
        // 0x2b01a4: 0xac8500b8  sw          $a1, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01A8u;
        goto label_2b01a8;
    }
    ctx->pc = 0x2B01A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01A0u;
        // 0x2b01a4: 0xac8500b8  sw          $a1, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B01A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B01A8u;
label_2b01a8:
    // 0x2b01a8: 0x3e00008  jr          $ra
label_2b01ac:
    if (ctx->pc == 0x2B01ACu) {
        ctx->pc = 0x2B01ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01A8u;
        // 0x2b01ac: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01B0u;
        goto label_2b01b0;
    }
    ctx->pc = 0x2B01A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B01ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01A8u;
        // 0x2b01ac: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B01A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B01B0u;
label_2b01b0:
    // 0x2b01b0: 0x3e00008  jr          $ra
label_2b01b4:
    if (ctx->pc == 0x2B01B4u) {
        ctx->pc = 0x2B01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01B0u;
        // 0x2b01b4: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01B8u;
        goto label_2b01b8;
    }
    ctx->pc = 0x2B01B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01B0u;
        // 0x2b01b4: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B01B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B01B8u;
label_2b01b8:
    // 0x2b01b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b01b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b01bc:
    // 0x2b01bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b01bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b01c0:
    // 0x2b01c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b01c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b01c4:
    // 0x2b01c4: 0xc0ac604  jal         func_2B1810
label_2b01c8:
    if (ctx->pc == 0x2B01C8u) {
        ctx->pc = 0x2B01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01C4u;
        // 0x2b01c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01CCu;
        goto label_2b01cc;
    }
    ctx->pc = 0x2B01C4u;
    SET_GPR_U32(ctx, 31, 0x2B01CCu);
    ctx->pc = 0x2B01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01C4u;
    // 0x2b01c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B01C4u, 0x2B01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01CCu;
label_2b01cc:
    // 0x2b01cc: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b01ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b01d0:
    // 0x2b01d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b01d4:
    if (ctx->pc == 0x2B01D4u) {
        ctx->pc = 0x2B01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01D0u;
        // 0x2b01d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01D8u;
        goto label_2b01d8;
    }
    ctx->pc = 0x2B01D0u;
    {
        const bool branch_taken_0x2b01d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01D0u;
        // 0x2b01d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01d0) {
            ctx->pc = 0x2B01ECu;
            goto label_2b01ec;
        }
    }
    ctx->pc = 0x2B01D8u;
label_2b01d8:
    // 0x2b01d8: 0xc0ac604  jal         func_2B1810
label_2b01dc:
    if (ctx->pc == 0x2B01DCu) {
        ctx->pc = 0x2B01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01D8u;
        // 0x2b01dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01E0u;
        goto label_2b01e0;
    }
    ctx->pc = 0x2B01D8u;
    SET_GPR_U32(ctx, 31, 0x2B01E0u);
    ctx->pc = 0x2B01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01D8u;
    // 0x2b01dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B01D8u, 0x2B01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01E0u;
label_2b01e0:
    // 0x2b01e0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2b01e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2b01e4:
    // 0x2b01e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b01e8:
    if (ctx->pc == 0x2B01E8u) {
        ctx->pc = 0x2B01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01E4u;
        // 0x2b01e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01ECu;
        goto label_2b01ec;
    }
    ctx->pc = 0x2B01E4u;
    {
        const bool branch_taken_0x2b01e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01E4u;
        // 0x2b01e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01e4) {
            ctx->pc = 0x2B01F4u;
            goto label_2b01f4;
        }
    }
    ctx->pc = 0x2B01ECu;
label_2b01ec:
    // 0x2b01ec: 0xc0abee6  jal         func_2AFB98
label_2b01f0:
    if (ctx->pc == 0x2B01F0u) {
        ctx->pc = 0x2B01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01ECu;
        // 0x2b01f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B01F4u;
        goto label_2b01f4;
    }
    ctx->pc = 0x2B01ECu;
    SET_GPR_U32(ctx, 31, 0x2B01F4u);
    ctx->pc = 0x2B01F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01ECu;
    // 0x2b01f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFB98u, 0x2B01ECu, 0x2B01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01F4u;
label_2b01f4:
    // 0x2b01f4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b01f8:
    // 0x2b01f8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b01fc:
    // 0x2b01fc: 0x40f809  jalr        $v0
label_2b0200:
    if (ctx->pc == 0x2B0200u) {
        ctx->pc = 0x2B0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01FCu;
        // 0x2b0200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0204u;
        goto label_2b0204;
    }
    ctx->pc = 0x2B01FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0204u);
        ctx->pc = 0x2B0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01FCu;
        // 0x2b0200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B01FCu, 0x2B0204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0204u;
label_2b0204:
    // 0x2b0204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0208:
    // 0x2b0208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b020c:
    // 0x2b020c: 0x3e00008  jr          $ra
label_2b0210:
    if (ctx->pc == 0x2B0210u) {
        ctx->pc = 0x2B0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B020Cu;
        // 0x2b0210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0214u;
        goto label_2b0214;
    }
    ctx->pc = 0x2B020Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B020Cu;
        // 0x2b0210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B020Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0214u;
label_2b0214:
    // 0x2b0214: 0x0  nop
    ctx->pc = 0x2b0214u;
    // NOP
}
