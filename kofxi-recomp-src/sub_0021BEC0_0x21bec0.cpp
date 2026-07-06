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

// Function: sub_0021BEC0
// Address: 0x21bec0 - 0x21c098
void sub_0021BEC0_0x21bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BEC0_0x21bec0");
#endif

    switch (ctx->pc) {
        case 0x21bedcu: goto label_21bedc;
        case 0x21beecu: goto label_21beec;
        case 0x21befcu: goto label_21befc;
        case 0x21bf0cu: goto label_21bf0c;
        case 0x21bf74u: goto label_21bf74;
        case 0x21bf88u: goto label_21bf88;
        case 0x21bf9cu: goto label_21bf9c;
        case 0x21bfb0u: goto label_21bfb0;
        case 0x21bfc0u: goto label_21bfc0;
        case 0x21c02cu: goto label_21c02c;
        case 0x21c040u: goto label_21c040;
        case 0x21c054u: goto label_21c054;
        case 0x21c068u: goto label_21c068;
        case 0x21c070u: goto label_21c070;
        default: break;
    }

    ctx->pc = 0x21bec0u;

label_21bec0:
    // 0x21bec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bec8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21becc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21beccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bed0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bed4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BED4u;
    SET_GPR_U32(ctx, 31, 0x21BEDCu);
    ctx->pc = 0x21BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BED4u;
    // 0x21bed8: 0x248416a0  addiu       $a0, $a0, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21BED4u, 0x21BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEDCu;
label_21bedc:
    // 0x21bedc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21bee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bee4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BEE4u;
    SET_GPR_U32(ctx, 31, 0x21BEECu);
    ctx->pc = 0x21BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEE4u;
    // 0x21bee8: 0x248416c0  addiu       $a0, $a0, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21BEE4u, 0x21BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEECu;
label_21beec:
    // 0x21beec: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x21beecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21bef0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bef4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BEF4u;
    SET_GPR_U32(ctx, 31, 0x21BEFCu);
    ctx->pc = 0x21BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEF4u;
    // 0x21bef8: 0x248411d0  addiu       $a0, $a0, 0x11D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21BEF4u, 0x21BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEFCu;
label_21befc:
    // 0x21befc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x21befcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x21bf00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bf04: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BF04u;
    SET_GPR_U32(ctx, 31, 0x21BF0Cu);
    ctx->pc = 0x21BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF04u;
    // 0x21bf08: 0x248411e0  addiu       $a0, $a0, 0x11E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21BF04u, 0x21BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF0Cu;
label_21bf0c:
    // 0x21bf0c: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x21bf0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x21bf10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21bf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bf18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bf1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bf1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bf20: 0x248411f0  addiu       $a0, $a0, 0x11F0
    ctx->pc = 0x21bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4592));
    // 0x21bf24: 0x8043e52  j           func_10F948
    ctx->pc = 0x21BF24u;
    ctx->pc = 0x21BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF24u;
    // 0x21bf28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21BF2Cu;
    // 0x21bf2c: 0x0  nop
    ctx->pc = 0x21bf2cu;
    // NOP
    // 0x21bf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21bf34: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21bf34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21bf38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21bf3c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21bf40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bf44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bf48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21bf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21bf4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21bf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21bf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21bf54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21bf54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21bf5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21bf5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21bf60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf64: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21bf64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21bf68: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21bf68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21bf6c: 0xc08449a  jal         func_211268
    ctx->pc = 0x21BF6Cu;
    SET_GPR_U32(ctx, 31, 0x21BF74u);
    ctx->pc = 0x21BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF6Cu;
    // 0x21bf70: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21BF6Cu, 0x21BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF74u;
label_21bf74:
    // 0x21bf74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21bf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21bf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21bf7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf80: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21BF80u;
    SET_GPR_U32(ctx, 31, 0x21BF88u);
    ctx->pc = 0x21BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF80u;
    // 0x21bf84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21BF80u, 0x21BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF88u;
label_21bf88:
    // 0x21bf88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21bf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21bf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21bf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf94: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21BF94u;
    SET_GPR_U32(ctx, 31, 0x21BF9Cu);
    ctx->pc = 0x21BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF94u;
    // 0x21bf98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21BF94u, 0x21BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF9Cu;
label_21bf9c:
    // 0x21bf9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21bf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfa0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21bfa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21bfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfa8: 0xc08449a  jal         func_211268
    ctx->pc = 0x21BFA8u;
    SET_GPR_U32(ctx, 31, 0x21BFB0u);
    ctx->pc = 0x21BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFA8u;
    // 0x21bfac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21BFA8u, 0x21BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFB0u;
label_21bfb0:
    // 0x21bfb0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21bfb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21bfb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21bfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfb8: 0xc086fb0  jal         func_21BEC0
    ctx->pc = 0x21BFB8u;
    SET_GPR_U32(ctx, 31, 0x21BFC0u);
    ctx->pc = 0x21BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFB8u;
    // 0x21bfbc: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BEC0u;
    goto label_21bec0;
    ctx->pc = 0x21BFC0u;
label_21bfc0:
    // 0x21bfc0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21bfc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bfc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bfc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bfc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bfcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21bfccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bfd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21bfd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21bfd4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21bfd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bfd8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x21BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFDCu;
        // 0x21bfe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BFE4u;
    // 0x21bfe4: 0x0  nop
    ctx->pc = 0x21bfe4u;
    // NOP
    // 0x21bfe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21bfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21bfec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21bfecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21bff0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21bff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bff8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c004: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21c008: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21c008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c00c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21c010: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c014: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21c014u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21c018: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c01c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21c01cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c020: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21c020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21c024: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21C024u;
    SET_GPR_U32(ctx, 31, 0x21C02Cu);
    ctx->pc = 0x21C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C024u;
    // 0x21c028: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21C024u, 0x21C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C02Cu;
label_21c02c:
    // 0x21c02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c030: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c034: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c038: 0xc084612  jal         func_211848
    ctx->pc = 0x21C038u;
    SET_GPR_U32(ctx, 31, 0x21C040u);
    ctx->pc = 0x21C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C038u;
    // 0x21c03c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21C038u, 0x21C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C040u;
label_21c040:
    // 0x21c040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c044: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c048: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c04c: 0xc084612  jal         func_211848
    ctx->pc = 0x21C04Cu;
    SET_GPR_U32(ctx, 31, 0x21C054u);
    ctx->pc = 0x21C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C04Cu;
    // 0x21c050: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21C04Cu, 0x21C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C054u;
label_21c054:
    // 0x21c054: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c058: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c060: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21C060u;
    SET_GPR_U32(ctx, 31, 0x21C068u);
    ctx->pc = 0x21C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C060u;
    // 0x21c064: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21C060u, 0x21C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C068u;
label_21c068:
    // 0x21c068: 0xc086fb0  jal         func_21BEC0
    ctx->pc = 0x21C068u;
    SET_GPR_U32(ctx, 31, 0x21C070u);
    ctx->pc = 0x21C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C068u;
    // 0x21c06c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BEC0u;
    goto label_21bec0;
    ctx->pc = 0x21C070u;
label_21c070:
    // 0x21c070: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21c074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c078: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21c078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21c07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21c084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c088: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21c088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c08c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21c090: 0x3e00008  jr          $ra
    ctx->pc = 0x21C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C090u;
        // 0x21c094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C098u;
}
