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

// Function: sub_001DBE50
// Address: 0x1dbe50 - 0x1dbf10
void sub_001DBE50_0x1dbe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBE50_0x1dbe50");
#endif

    switch (ctx->pc) {
        case 0x1dbeb8u: goto label_1dbeb8;
        case 0x1dbec4u: goto label_1dbec4;
        case 0x1dbedcu: goto label_1dbedc;
        default: break;
    }

    ctx->pc = 0x1dbe50u;

    // 0x1dbe50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbe54: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1dbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1dbe58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbe5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dbe5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe60: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x1dbe60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1dbe64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbe68: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x1dbe68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1dbe6c: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x1dbe6cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1dbe70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dbe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dbe74: 0x24b3003f  addiu       $s3, $a1, 0x3F
    ctx->pc = 0x1dbe74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x1dbe78: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1dbe7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1dbe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1dbe80: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x1dbe80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1dbe84: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1dbe88: 0x118980  sll         $s1, $s1, 6
    ctx->pc = 0x1dbe88u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1dbe8c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1dbe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1dbe90: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1dbe94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dbe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dbe98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dbe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe9c: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x1dbe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x1dbea0: 0x26340420  addiu       $s4, $s1, 0x420
    ctx->pc = 0x1dbea0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x1dbea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dbea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbeac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dbeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dbeb0: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1DBEB0u;
    SET_GPR_U32(ctx, 31, 0x1DBEB8u);
    ctx->pc = 0x1DBEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEB0u;
    // 0x1dbeb4: 0x3c1001c0  lui         $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)448 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D63E8u, 0x1DBEB0u, 0x1DBEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEB8u;
label_1dbeb8:
    // 0x1dbeb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dbeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbebc: 0xc07707c  jal         func_1DC1F0
    ctx->pc = 0x1DBEBCu;
    SET_GPR_U32(ctx, 31, 0x1DBEC4u);
    ctx->pc = 0x1DBEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEBCu;
    // 0x1dbec0: 0x24051be0  addiu       $a1, $zero, 0x1BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC1F0u, 0x1DBEBCu, 0x1DBEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEC4u;
label_1dbec4:
    // 0x1dbec4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1dbec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1dbec8: 0x26108080  addiu       $s0, $s0, -0x7F80
    ctx->pc = 0x1dbec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934656));
    // 0x1dbecc: 0x24a5c2c0  addiu       $a1, $a1, -0x3D40
    ctx->pc = 0x1dbeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951616));
    // 0x1dbed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbed4: 0xc0757de  jal         func_1D5F78
    ctx->pc = 0x1DBED4u;
    SET_GPR_U32(ctx, 31, 0x1DBEDCu);
    ctx->pc = 0x1DBED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBED4u;
    // 0x1dbed8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F78u, 0x1DBED4u, 0x1DBEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEDCu;
label_1dbedc:
    // 0x1dbedc: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1dbedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x1dbee0: 0xae130058  sw          $s3, 0x58($s0)
    ctx->pc = 0x1dbee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
    // 0x1dbee4: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x1dbee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x1dbee8: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x1dbee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x1dbeec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbef4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbef8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbefc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dbefcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbf00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dbf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dbf04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF04u;
        // 0x1dbf08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBF0Cu;
    // 0x1dbf0c: 0x0  nop
    ctx->pc = 0x1dbf0cu;
    // NOP
    if (ctx->pc == 0x1dbf0cu) { ctx->pc = 0x1dbf10u; }
}
