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

// Function: sub_001CAB98
// Address: 0x1cab98 - 0x1cac40
void sub_001CAB98_0x1cab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAB98_0x1cab98");
#endif

    switch (ctx->pc) {
        case 0x1cabdcu: goto label_1cabdc;
        case 0x1cac14u: goto label_1cac14;
        case 0x1cac24u: goto label_1cac24;
        default: break;
    }

    ctx->pc = 0x1cab98u;

    // 0x1cab98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cab98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cab9c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAB9Cu;
    {
        const bool branch_taken_0x1cab9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB9Cu;
        // 0x1caba0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab9c) {
            ctx->pc = 0x1CABB8u;
            goto label_1cabb8;
        }
    }
    ctx->pc = 0x1CABA4u;
    // 0x1caba4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1caba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1caba8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1caba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cabac: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x1cabacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    // 0x1cabb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CABB0u;
    {
        const bool branch_taken_0x1cabb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABB0u;
        // 0x1cabb4: 0x24a5b868  addiu       $a1, $a1, -0x4798 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabb0) {
            ctx->pc = 0x1CABD4u;
            goto label_1cabd4;
        }
    }
    ctx->pc = 0x1CABB8u;
label_1cabb8:
    // 0x1cabb8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cabbc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CABBCu;
    {
        const bool branch_taken_0x1cabbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cabbc) {
            ctx->pc = 0x1CABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CABBCu;
            // 0x1cabc0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CABE0u;
            goto label_1cabe0;
        }
    }
    ctx->pc = 0x1CABC4u;
    // 0x1cabc4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cabc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cabc8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cabc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cabcc: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1cabccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1cabd0: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x1cabd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
label_1cabd4:
    // 0x1cabd4: 0xc072a14  jal         func_1CA850
    ctx->pc = 0x1CABD4u;
    SET_GPR_U32(ctx, 31, 0x1CABDCu);
    ctx->pc = 0x1CA850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA850u, 0x1CABD4u, 0x1CABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABDCu;
label_1cabdc:
    // 0x1cabdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cabdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cabe0:
    // 0x1cabe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cabe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cabe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CABE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABE4u;
        // 0x1cabe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CABE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CABECu;
    // 0x1cabec: 0x0  nop
    ctx->pc = 0x1cabecu;
    // NOP
    // 0x1cabf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cabf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cabf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cabf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cabf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cabfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cac00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cac00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cac08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cac0c: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CAC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC14u);
    ctx->pc = 0x1CAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC0Cu;
    // 0x1cac10: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CAC0Cu, 0x1CAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC14u;
label_1cac14:
    // 0x1cac14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cac14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cac18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac1c: 0xc072b10  jal         func_1CAC40
    ctx->pc = 0x1CAC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC24u);
    ctx->pc = 0x1CAC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC1Cu;
    // 0x1cac20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAC40u, 0x1CAC1Cu, 0x1CAC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC24u;
label_1cac24:
    // 0x1cac24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cac24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cac28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cac28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cac2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cac2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cac30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cac30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac34: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CAC34u;
    ctx->pc = 0x1CAC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC34u;
    // 0x1cac38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAC3Cu;
    // 0x1cac3c: 0x0  nop
    ctx->pc = 0x1cac3cu;
    // NOP
    if (ctx->pc == 0x1cac3cu) { ctx->pc = 0x1cac40u; }
}
