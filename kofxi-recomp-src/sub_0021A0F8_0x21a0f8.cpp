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

// Function: sub_0021A0F8
// Address: 0x21a0f8 - 0x21a1f0
void sub_0021A0F8_0x21a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A0F8_0x21a0f8");
#endif

    switch (ctx->pc) {
        case 0x21a114u: goto label_21a114;
        case 0x21a164u: goto label_21a164;
        case 0x21a174u: goto label_21a174;
        case 0x21a1c4u: goto label_21a1c4;
        case 0x21a1ccu: goto label_21a1cc;
        default: break;
    }

    ctx->pc = 0x21a0f8u;

label_21a0f8:
    // 0x21a0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21a104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a108: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a10c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A10Cu;
    SET_GPR_U32(ctx, 31, 0x21A114u);
    ctx->pc = 0x21A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A10Cu;
    // 0x21a110: 0x248413b0  addiu       $a0, $a0, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21A10Cu, 0x21A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A114u;
label_21a114:
    // 0x21a114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a118: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21a118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a11c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a124: 0x248412c0  addiu       $a0, $a0, 0x12C0
    ctx->pc = 0x21a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x21a128: 0x8043e52  j           func_10F948
    ctx->pc = 0x21A128u;
    ctx->pc = 0x21A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A128u;
    // 0x21a12c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21A130u;
    // 0x21a130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a134: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a134u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a13c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a140: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a144: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21a144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a14c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a150: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21a150u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21a154: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21a154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a158: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x21a158u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a15c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21A15Cu;
    SET_GPR_U32(ctx, 31, 0x21A164u);
    ctx->pc = 0x21A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A15Cu;
    // 0x21a160: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x21A15Cu, 0x21A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A164u;
label_21a164:
    // 0x21a164: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21a164u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a16c: 0xc08683e  jal         func_21A0F8
    ctx->pc = 0x21A16Cu;
    SET_GPR_U32(ctx, 31, 0x21A174u);
    ctx->pc = 0x21A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A16Cu;
    // 0x21a170: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A0F8u;
    goto label_21a0f8;
    ctx->pc = 0x21A174u;
label_21a174:
    // 0x21a174: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a180: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a184: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a188: 0x3e00008  jr          $ra
    ctx->pc = 0x21A188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A188u;
        // 0x21a18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A190u;
    // 0x21a190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a194: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a194u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a198: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a19c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21a19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a1a4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21a1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a1a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a1b0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x21a1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a1b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1b8: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21a1bc: 0xc084582  jal         func_211608
    ctx->pc = 0x21A1BCu;
    SET_GPR_U32(ctx, 31, 0x21A1C4u);
    ctx->pc = 0x21A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1BCu;
    // 0x21a1c0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21A1BCu, 0x21A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1C4u;
label_21a1c4:
    // 0x21a1c4: 0xc08683e  jal         func_21A0F8
    ctx->pc = 0x21A1C4u;
    SET_GPR_U32(ctx, 31, 0x21A1CCu);
    ctx->pc = 0x21A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1C4u;
    // 0x21a1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A0F8u;
    goto label_21a0f8;
    ctx->pc = 0x21A1CCu;
label_21a1cc:
    // 0x21a1cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a1d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a1d4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21a1d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a1d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a1dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a1dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a1e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1E4u;
        // 0x21a1e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A1ECu;
    // 0x21a1ec: 0x0  nop
    ctx->pc = 0x21a1ecu;
    // NOP
    if (ctx->pc == 0x21a1ecu) { ctx->pc = 0x21a1f0u; }
}
