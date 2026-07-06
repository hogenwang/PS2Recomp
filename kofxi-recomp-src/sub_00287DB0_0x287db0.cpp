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

// Function: sub_00287DB0
// Address: 0x287db0 - 0x287ee0
void sub_00287DB0_0x287db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287DB0_0x287db0");
#endif

    switch (ctx->pc) {
        case 0x287e20u: goto label_287e20;
        case 0x287e28u: goto label_287e28;
        case 0x287e44u: goto label_287e44;
        case 0x287e64u: goto label_287e64;
        case 0x287e84u: goto label_287e84;
        case 0x287eacu: goto label_287eac;
        default: break;
    }

    ctx->pc = 0x287db0u;

    // 0x287db0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x287db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x287db4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x287db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x287db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287dbc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x287dbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dc0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x287dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x287dc4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x287dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x287dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x287dcc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x287dccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x287dd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x287dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x287dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x287ddc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x287ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287de0: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x287de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x287de4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287DE4u;
    {
        const bool branch_taken_0x287de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DE4u;
        // 0x287de8: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287de4) {
            ctx->pc = 0x287E04u;
            goto label_287e04;
        }
    }
    ctx->pc = 0x287DECu;
    // 0x287dec: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x287decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287df0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x287df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287df4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x287df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287df8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x287df8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e00: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x287e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_287e04:
    // 0x287e04: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x287e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x287e08: 0xde270000  ld          $a3, 0x0($s1)
    ctx->pc = 0x287e08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x287e0c: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x287e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x287e10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x287e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e18: 0xc0a22e0  jal         func_288B80
    ctx->pc = 0x287E18u;
    SET_GPR_U32(ctx, 31, 0x287E20u);
    ctx->pc = 0x287E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E18u;
    // 0x287e1c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B80u, 0x287E18u, 0x287E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E20u;
label_287e20:
    // 0x287e20: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x287e20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x287e24: 0x0  nop
    ctx->pc = 0x287e24u;
    // NOP
label_287e28:
    // 0x287e28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x287e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x287e2c: 0x1a000023  blez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x287E2Cu;
    {
        const bool branch_taken_0x287e2c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x287E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E2Cu;
        // 0x287e30: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e2c) {
            ctx->pc = 0x287EBCu;
            goto label_287ebc;
        }
    }
    ctx->pc = 0x287E34u;
    // 0x287e34: 0xde270008  ld          $a3, 0x8($s1)
    ctx->pc = 0x287e34u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287e38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x287e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e3c: 0xc0a2202  jal         func_288808
    ctx->pc = 0x287E3Cu;
    SET_GPR_U32(ctx, 31, 0x287E44u);
    ctx->pc = 0x287E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E3Cu;
    // 0x287e40: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x287E3Cu, 0x287E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E44u;
label_287e44:
    // 0x287e44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x287e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x287e48: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x287E48u;
    {
        const bool branch_taken_0x287e48 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x287E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E48u;
        // 0x287e4c: 0xfe420008  sd          $v0, 0x8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e48) {
            ctx->pc = 0x287EBCu;
            goto label_287ebc;
        }
    }
    ctx->pc = 0x287E50u;
    // 0x287e50: 0xde270010  ld          $a3, 0x10($s1)
    ctx->pc = 0x287e50u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287e54: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x287e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x287e58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x287e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e5c: 0xc0a2202  jal         func_288808
    ctx->pc = 0x287E5Cu;
    SET_GPR_U32(ctx, 31, 0x287E64u);
    ctx->pc = 0x287E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E5Cu;
    // 0x287e60: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x287E5Cu, 0x287E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E64u;
label_287e64:
    // 0x287e64: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x287e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x287e68: 0x1a000014  blez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x287E68u;
    {
        const bool branch_taken_0x287e68 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x287E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E68u;
        // 0x287e6c: 0xfe420010  sd          $v0, 0x10($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e68) {
            ctx->pc = 0x287EBCu;
            goto label_287ebc;
        }
    }
    ctx->pc = 0x287E70u;
    // 0x287e70: 0xde270018  ld          $a3, 0x18($s1)
    ctx->pc = 0x287e70u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x287e74: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x287e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x287e78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x287e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e7c: 0xc0a2202  jal         func_288808
    ctx->pc = 0x287E7Cu;
    SET_GPR_U32(ctx, 31, 0x287E84u);
    ctx->pc = 0x287E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E7Cu;
    // 0x287e80: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x287E7Cu, 0x287E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E84u;
label_287e84:
    // 0x287e84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x287e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x287e88: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x287E88u;
    {
        const bool branch_taken_0x287e88 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x287E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E88u;
        // 0x287e8c: 0xfe420018  sd          $v0, 0x18($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e88) {
            ctx->pc = 0x287EBCu;
            goto label_287ebc;
        }
    }
    ctx->pc = 0x287E90u;
    // 0x287e90: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x287e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x287e94: 0xde270020  ld          $a3, 0x20($s1)
    ctx->pc = 0x287e94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x287e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x287e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x287e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x287ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea4: 0xc0a2202  jal         func_288808
    ctx->pc = 0x287EA4u;
    SET_GPR_U32(ctx, 31, 0x287EACu);
    ctx->pc = 0x287EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EA4u;
    // 0x287ea8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x287EA4u, 0x287EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EACu;
label_287eac:
    // 0x287eac: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x287eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x287eb0: 0xfe420020  sd          $v0, 0x20($s2)
    ctx->pc = 0x287eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 2));
    // 0x287eb4: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x287EB4u;
    {
        const bool branch_taken_0x287eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EB4u;
        // 0x287eb8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287eb4) {
            ctx->pc = 0x287E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287e28;
        }
    }
    ctx->pc = 0x287EBCu;
label_287ebc:
    // 0x287ebc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x287ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287ec0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x287ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287ec4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x287ec4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287ec8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x287ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287ecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x287eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287ed0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x287ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x287ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287ED8u;
        // 0x287edc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287EE0u;
}
