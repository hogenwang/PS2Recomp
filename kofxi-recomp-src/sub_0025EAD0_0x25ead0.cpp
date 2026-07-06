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

// Function: sub_0025EAD0
// Address: 0x25ead0 - 0x25ec48
void sub_0025EAD0_0x25ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EAD0_0x25ead0");
#endif

    switch (ctx->pc) {
        case 0x25eb18u: goto label_25eb18;
        case 0x25eb28u: goto label_25eb28;
        case 0x25eb38u: goto label_25eb38;
        case 0x25eb78u: goto label_25eb78;
        case 0x25eb84u: goto label_25eb84;
        case 0x25eba0u: goto label_25eba0;
        case 0x25ebacu: goto label_25ebac;
        default: break;
    }

    ctx->pc = 0x25ead0u;

    // 0x25ead0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25ead4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25ead4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ead8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x25ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x25eadc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x25eadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x25eae0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x25eae0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25eae4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25eae8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x25eae8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eaec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25eaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25eaf0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x25eaf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eaf4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25eaf8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25eaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25eafc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25eafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb00: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25eb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25eb04: 0x26540004  addiu       $s4, $s2, 0x4
    ctx->pc = 0x25eb04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x25eb08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25eb0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25eb10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25eb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25eb14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25eb18:
    // 0x25eb18: 0x1aa0003b  blez        $s5, . + 4 + (0x3B << 2)
    ctx->pc = 0x25EB18u;
    {
        const bool branch_taken_0x25eb18 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x25EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB18u;
        // 0x25eb1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb18) {
            ctx->pc = 0x25EC08u;
            goto label_25ec08;
        }
    }
    ctx->pc = 0x25EB20u;
    // 0x25eb20: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25eb24: 0x0  nop
    ctx->pc = 0x25eb24u;
    // NOP
label_25eb28:
    // 0x25eb28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25eb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25eb2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb34: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_25eb38:
    if (ctx->pc == 0x25EB38u) {
        ctx->pc = 0x25EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB34u;
        // 0x25eb38: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB3Cu;
        goto label_fallthrough_0x25eb34;
    }
    ctx->pc = 0x25EB34u;
    {
        const bool branch_taken_0x25eb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB34u;
        // 0x25eb38: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb34) {
            ctx->pc = 0x25EB54u;
            goto label_25eb54;
        }
    }
label_fallthrough_0x25eb34:
    ctx->pc = 0x25EB3Cu;
    // 0x25eb3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25eb40: 0x0  nop
    ctx->pc = 0x25eb40u;
    // NOP
    // 0x25eb44: 0x0  nop
    ctx->pc = 0x25eb44u;
    // NOP
    // 0x25eb48: 0x0  nop
    ctx->pc = 0x25eb48u;
    // NOP
    // 0x25eb4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25EB4Cu;
    {
        const bool branch_taken_0x25eb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB4Cu;
        // 0x25eb50: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb4c) {
            ctx->pc = 0x25EB38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25eb38;
        }
    }
    ctx->pc = 0x25EB54u;
label_25eb54:
    // 0x25eb54: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x25EB54u;
    {
        const bool branch_taken_0x25eb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB54u;
        // 0x25eb58: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb54) {
            ctx->pc = 0x25EBE8u;
            goto label_25ebe8;
        }
    }
    ctx->pc = 0x25EB5Cu;
    // 0x25eb5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25eb60: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x25eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25eb64: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x25eb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x25eb68: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25EB68u;
    {
        const bool branch_taken_0x25eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB68u;
        // 0x25eb6c: 0x26540004  addiu       $s4, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb68) {
            ctx->pc = 0x25EBE8u;
            goto label_25ebe8;
        }
    }
    ctx->pc = 0x25EB70u;
    // 0x25eb70: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x25eb70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x25eb74: 0x7e1004  sllv        $v0, $fp, $v1
    ctx->pc = 0x25eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 3) & 0x1F));
label_25eb78:
    // 0x25eb78: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25eb78u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x25eb7c: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25EB7Cu;
    SET_GPR_U32(ctx, 31, 0x25EB84u);
    ctx->pc = 0x25EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB7Cu;
    // 0x25eb80: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25EB7Cu, 0x25EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB84u;
label_25eb84:
    // 0x25eb84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25EB84u;
    {
        const bool branch_taken_0x25eb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB84u;
        // 0x25eb88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb84) {
            ctx->pc = 0x25EBA0u;
            goto label_25eba0;
        }
    }
    ctx->pc = 0x25EB8Cu;
    // 0x25eb8c: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x25eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x25eb90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EB90u;
    {
        const bool branch_taken_0x25eb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB90u;
        // 0x25eb94: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb90) {
            ctx->pc = 0x25EBA0u;
            goto label_25eba0;
        }
    }
    ctx->pc = 0x25EB98u;
    // 0x25eb98: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25EB98u;
    SET_GPR_U32(ctx, 31, 0x25EBA0u);
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25EB98u, 0x25EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBA0u;
label_25eba0:
    // 0x25eba0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25eba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25eba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eba8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_25ebac:
    if (ctx->pc == 0x25EBACu) {
        ctx->pc = 0x25EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBA8u;
        // 0x25ebac: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBB0u;
        goto label_fallthrough_0x25eba8;
    }
    ctx->pc = 0x25EBA8u;
    {
        const bool branch_taken_0x25eba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBA8u;
        // 0x25ebac: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eba8) {
            ctx->pc = 0x25EBC8u;
            goto label_25ebc8;
        }
    }
label_fallthrough_0x25eba8:
    ctx->pc = 0x25EBB0u;
    // 0x25ebb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25ebb4: 0x0  nop
    ctx->pc = 0x25ebb4u;
    // NOP
    // 0x25ebb8: 0x0  nop
    ctx->pc = 0x25ebb8u;
    // NOP
    // 0x25ebbc: 0x0  nop
    ctx->pc = 0x25ebbcu;
    // NOP
    // 0x25ebc0: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25EBC0u;
    {
        const bool branch_taken_0x25ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBC0u;
        // 0x25ebc4: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebc0) {
            ctx->pc = 0x25EBACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ebac;
        }
    }
    ctx->pc = 0x25EBC8u;
label_25ebc8:
    // 0x25ebc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25EBC8u;
    {
        const bool branch_taken_0x25ebc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBC8u;
        // 0x25ebcc: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebc8) {
            ctx->pc = 0x25EBF0u;
            goto label_25ebf0;
        }
    }
    ctx->pc = 0x25EBD0u;
    // 0x25ebd0: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x25ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25ebd4: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x25ebd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x25ebd8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x25EBD8u;
    {
        const bool branch_taken_0x25ebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBD8u;
        // 0x25ebdc: 0x7e1004  sllv        $v0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebd8) {
            ctx->pc = 0x25EB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25eb78;
        }
    }
    ctx->pc = 0x25EBE0u;
    // 0x25ebe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25EBE0u;
    {
        const bool branch_taken_0x25ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBE0u;
        // 0x25ebe4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebe0) {
            ctx->pc = 0x25EBF4u;
            goto label_25ebf4;
        }
    }
    ctx->pc = 0x25EBE8u;
label_25ebe8:
    // 0x25ebe8: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x25ebe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x25ebec: 0x26540004  addiu       $s4, $s2, 0x4
    ctx->pc = 0x25ebecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_25ebf0:
    // 0x25ebf0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x25ebf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ebf4:
    // 0x25ebf4: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x25ebf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x25ebf8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x25EBF8u;
    {
        const bool branch_taken_0x25ebf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBF8u;
        // 0x25ebfc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebf8) {
            ctx->pc = 0x25EB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25eb28;
        }
    }
    ctx->pc = 0x25EC00u;
    // 0x25ec00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25EC00u;
    {
        const bool branch_taken_0x25ec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC00u;
        // 0x25ec04: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec00) {
            ctx->pc = 0x25EC10u;
            goto label_25ec10;
        }
    }
    ctx->pc = 0x25EC08u;
label_25ec08:
    // 0x25ec08: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x25ec08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25ec0c: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x25ec0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25ec10:
    // 0x25ec10: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x25ec10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25ec14: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x25EC14u;
    {
        const bool branch_taken_0x25ec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC14u;
        // 0x25ec18: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec14) {
            ctx->pc = 0x25EB18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25eb18;
        }
    }
    ctx->pc = 0x25EC1Cu;
    // 0x25ec1c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x25ec1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25ec20: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x25ec20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ec24: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x25ec24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ec28: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25ec28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ec2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25ec2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ec30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25ec30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ec34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25ec34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ec38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25ec38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ec3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ec3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ec40: 0x3e00008  jr          $ra
    ctx->pc = 0x25EC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC40u;
        // 0x25ec44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EC48u;
}
