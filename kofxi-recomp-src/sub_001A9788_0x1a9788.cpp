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

// Function: sub_001A9788
// Address: 0x1a9788 - 0x1a9838
void sub_001A9788_0x1a9788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9788_0x1a9788");
#endif

    switch (ctx->pc) {
        case 0x1a9788u: goto label_1a9788;
        case 0x1a978cu: goto label_1a978c;
        case 0x1a9790u: goto label_1a9790;
        case 0x1a9794u: goto label_1a9794;
        case 0x1a9798u: goto label_1a9798;
        case 0x1a979cu: goto label_1a979c;
        case 0x1a97a0u: goto label_1a97a0;
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a97a8u: goto label_1a97a8;
        case 0x1a97acu: goto label_1a97ac;
        case 0x1a97b0u: goto label_1a97b0;
        case 0x1a97b4u: goto label_1a97b4;
        case 0x1a97b8u: goto label_1a97b8;
        case 0x1a97bcu: goto label_1a97bc;
        case 0x1a97c0u: goto label_1a97c0;
        case 0x1a97c4u: goto label_1a97c4;
        case 0x1a97c8u: goto label_1a97c8;
        case 0x1a97ccu: goto label_1a97cc;
        case 0x1a97d0u: goto label_1a97d0;
        case 0x1a97d4u: goto label_1a97d4;
        case 0x1a97d8u: goto label_1a97d8;
        case 0x1a97dcu: goto label_1a97dc;
        case 0x1a97e0u: goto label_1a97e0;
        case 0x1a97e4u: goto label_1a97e4;
        case 0x1a97e8u: goto label_1a97e8;
        case 0x1a97ecu: goto label_1a97ec;
        case 0x1a97f0u: goto label_1a97f0;
        case 0x1a97f4u: goto label_1a97f4;
        case 0x1a97f8u: goto label_1a97f8;
        case 0x1a97fcu: goto label_1a97fc;
        case 0x1a9800u: goto label_1a9800;
        case 0x1a9804u: goto label_1a9804;
        case 0x1a9808u: goto label_1a9808;
        case 0x1a980cu: goto label_1a980c;
        case 0x1a9810u: goto label_1a9810;
        case 0x1a9814u: goto label_1a9814;
        case 0x1a9818u: goto label_1a9818;
        case 0x1a981cu: goto label_1a981c;
        case 0x1a9820u: goto label_1a9820;
        case 0x1a9824u: goto label_1a9824;
        case 0x1a9828u: goto label_1a9828;
        case 0x1a982cu: goto label_1a982c;
        case 0x1a9830u: goto label_1a9830;
        case 0x1a9834u: goto label_1a9834;
        default: break;
    }

    ctx->pc = 0x1a9788u;

label_1a9788:
    // 0x1a9788: 0x3e00008  jr          $ra
label_1a978c:
    if (ctx->pc == 0x1A978Cu) {
        ctx->pc = 0x1A978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9788u;
        // 0x1a978c: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9790u;
        goto label_1a9790;
    }
    ctx->pc = 0x1A9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9788u;
        // 0x1a978c: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9790u;
label_1a9790:
    // 0x1a9790: 0x3e00008  jr          $ra
label_1a9794:
    if (ctx->pc == 0x1A9794u) {
        ctx->pc = 0x1A9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9790u;
        // 0x1a9794: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9798u;
        goto label_1a9798;
    }
    ctx->pc = 0x1A9790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9790u;
        // 0x1a9794: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9798u;
label_1a9798:
    // 0x1a9798: 0x3e00008  jr          $ra
label_1a979c:
    if (ctx->pc == 0x1A979Cu) {
        ctx->pc = 0x1A979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9798u;
        // 0x1a979c: 0xe48c0024  swc1        $f12, 0x24($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97A0u;
        goto label_1a97a0;
    }
    ctx->pc = 0x1A9798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9798u;
        // 0x1a979c: 0xe48c0024  swc1        $f12, 0x24($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A97A0u;
label_1a97a0:
    // 0x1a97a0: 0x3e00008  jr          $ra
label_1a97a4:
    if (ctx->pc == 0x1A97A4u) {
        ctx->pc = 0x1A97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97A0u;
        // 0x1a97a4: 0xc4800024  lwc1        $f0, 0x24($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97A8u;
        goto label_1a97a8;
    }
    ctx->pc = 0x1A97A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97A0u;
        // 0x1a97a4: 0xc4800024  lwc1        $f0, 0x24($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A97A8u;
label_1a97a8:
    // 0x1a97a8: 0x3e00008  jr          $ra
label_1a97ac:
    if (ctx->pc == 0x1A97ACu) {
        ctx->pc = 0x1A97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97A8u;
        // 0x1a97ac: 0xe48c0028  swc1        $f12, 0x28($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97B0u;
        goto label_1a97b0;
    }
    ctx->pc = 0x1A97A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97A8u;
        // 0x1a97ac: 0xe48c0028  swc1        $f12, 0x28($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A97B0u;
label_1a97b0:
    // 0x1a97b0: 0x3e00008  jr          $ra
label_1a97b4:
    if (ctx->pc == 0x1A97B4u) {
        ctx->pc = 0x1A97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97B0u;
        // 0x1a97b4: 0xc4800028  lwc1        $f0, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97B8u;
        goto label_1a97b8;
    }
    ctx->pc = 0x1A97B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97B0u;
        // 0x1a97b4: 0xc4800028  lwc1        $f0, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A97B8u;
label_1a97b8:
    // 0x1a97b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a97b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a97bc:
    // 0x1a97bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a97bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a97c0:
    // 0x1a97c0: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x1a97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_1a97c4:
    // 0x1a97c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a97c8:
    if (ctx->pc == 0x1A97C8u) {
        ctx->pc = 0x1A97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97C4u;
        // 0x1a97c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97CCu;
        goto label_1a97cc;
    }
    ctx->pc = 0x1A97C4u;
    {
        const bool branch_taken_0x1a97c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97C4u;
        // 0x1a97c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a97c4) {
            ctx->pc = 0x1A97DCu;
            goto label_1a97dc;
        }
    }
    ctx->pc = 0x1A97CCu;
label_1a97cc:
    // 0x1a97cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a97d0:
    // 0x1a97d0: 0x8c43e460  lw          $v1, -0x1BA0($v0)
    ctx->pc = 0x1a97d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960224)));
label_1a97d4:
    // 0x1a97d4: 0x60f809  jalr        $v1
label_1a97d8:
    if (ctx->pc == 0x1A97D8u) {
        ctx->pc = 0x1A97DCu;
        goto label_1a97dc;
    }
    ctx->pc = 0x1A97D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A97DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97D4u, 0x1A97DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A97DCu;
label_1a97dc:
    // 0x1a97dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a97dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a97e0:
    // 0x1a97e0: 0x3e00008  jr          $ra
label_1a97e4:
    if (ctx->pc == 0x1A97E4u) {
        ctx->pc = 0x1A97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97E0u;
        // 0x1a97e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97E8u;
        goto label_1a97e8;
    }
    ctx->pc = 0x1A97E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97E0u;
        // 0x1a97e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A97E8u;
label_1a97e8:
    // 0x1a97e8: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x1a97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_1a97ec:
    // 0x1a97ec: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x1a97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
label_1a97f0:
    // 0x1a97f0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1a97f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a97f4:
    // 0x1a97f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a97f8:
    if (ctx->pc == 0x1A97F8u) {
        ctx->pc = 0x1A97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97F4u;
        // 0x1a97f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97FCu;
        goto label_1a97fc;
    }
    ctx->pc = 0x1A97F4u;
    {
        const bool branch_taken_0x1a97f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97f4) {
            ctx->pc = 0x1A97F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A97F4u;
            // 0x1a97f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A97FCu;
            goto label_1a97fc;
        }
    }
    ctx->pc = 0x1A97FCu;
label_1a97fc:
    // 0x1a97fc: 0x1812  mflo        $v1
    ctx->pc = 0x1a97fcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1a9800:
    // 0x1a9800: 0x3e00008  jr          $ra
label_1a9804:
    if (ctx->pc == 0x1A9804u) {
        ctx->pc = 0x1A9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9800u;
        // 0x1a9804: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9808u;
        goto label_1a9808;
    }
    ctx->pc = 0x1A9800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9800u;
        // 0x1a9804: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9808u;
label_1a9808:
    // 0x1a9808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a980c:
    // 0x1a980c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9810:
    // 0x1a9810: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x1a9810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_1a9814:
    // 0x1a9814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a9818:
    if (ctx->pc == 0x1A9818u) {
        ctx->pc = 0x1A9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9814u;
        // 0x1a9818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A981Cu;
        goto label_1a981c;
    }
    ctx->pc = 0x1A9814u;
    {
        const bool branch_taken_0x1a9814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9814u;
        // 0x1a9818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9814) {
            ctx->pc = 0x1A982Cu;
            goto label_1a982c;
        }
    }
    ctx->pc = 0x1A981Cu;
label_1a981c:
    // 0x1a981c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a981cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a9820:
    // 0x1a9820: 0x8c43e464  lw          $v1, -0x1B9C($v0)
    ctx->pc = 0x1a9820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960228)));
label_1a9824:
    // 0x1a9824: 0x60f809  jalr        $v1
label_1a9828:
    if (ctx->pc == 0x1A9828u) {
        ctx->pc = 0x1A982Cu;
        goto label_1a982c;
    }
    ctx->pc = 0x1A9824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A982Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9824u, 0x1A982Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A982Cu;
label_1a982c:
    // 0x1a982c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a982cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9830:
    // 0x1a9830: 0x3e00008  jr          $ra
label_1a9834:
    if (ctx->pc == 0x1A9834u) {
        ctx->pc = 0x1A9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9830u;
        // 0x1a9834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9838u;
        goto label_fallthrough_0x1a9830;
    }
    ctx->pc = 0x1A9830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9830u;
        // 0x1a9834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9830:
    ctx->pc = 0x1A9838u;
}
