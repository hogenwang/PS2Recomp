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

// Function: sub_00287EE0
// Address: 0x287ee0 - 0x288060
void sub_00287EE0_0x287ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287EE0_0x287ee0");
#endif

    switch (ctx->pc) {
        case 0x287f40u: goto label_287f40;
        case 0x287f6cu: goto label_287f6c;
        case 0x287fc0u: goto label_287fc0;
        case 0x288000u: goto label_288000;
        case 0x288038u: goto label_288038;
        default: break;
    }

    ctx->pc = 0x287ee0u;

    // 0x287ee0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287ee4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x287ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x287ee8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x287ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x287eec: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x287eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x287ef0: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x287ef0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x287ef4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x287ef8: 0x38983  sra         $s1, $v1, 6
    ctx->pc = 0x287ef8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 6));
    // 0x287efc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x287efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x287f00: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x287f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x287f04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x287f08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x287f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287f10: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x287f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x287f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x287f18: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x287f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x287f1c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x287f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x287f20: 0xc28823  subu        $s1, $a2, $v0
    ctx->pc = 0x287f20u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x287f24: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x287f24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x287f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f2c: 0xf2182a  slt         $v1, $a3, $s2
    ctx->pc = 0x287f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x287f30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x287F30u;
    {
        const bool branch_taken_0x287f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F30u;
        // 0x287f34: 0xb1a023  subu        $s4, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f30) {
            ctx->pc = 0x287F48u;
            goto label_287f48;
        }
    }
    ctx->pc = 0x287F38u;
    // 0x287f38: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x287F38u;
    SET_GPR_U32(ctx, 31, 0x287F40u);
    ctx->pc = 0x287F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F38u;
    // 0x287f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DA8u, 0x287F38u, 0x287F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F40u;
label_287f40:
    // 0x287f40: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x287F40u;
    {
        const bool branch_taken_0x287f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F40u;
        // 0x287f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f40) {
            ctx->pc = 0x28803Cu;
            goto label_28803c;
        }
    }
    ctx->pc = 0x287F48u;
label_287f48:
    // 0x287f48: 0x12130012  beq         $s0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x287F48u;
    {
        const bool branch_taken_0x287f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x287F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F48u;
        // 0x287f4c: 0xf21823  subu        $v1, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f48) {
            ctx->pc = 0x287F94u;
            goto label_287f94;
        }
    }
    ctx->pc = 0x287F50u;
    // 0x287f50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x287f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x287f54: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x287f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x287f58: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x287f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x287f5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287F5Cu;
    {
        const bool branch_taken_0x287f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287f5c) {
            ctx->pc = 0x287F7Cu;
            goto label_287f7c;
        }
    }
    ctx->pc = 0x287F64u;
    // 0x287f64: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x287F64u;
    SET_GPR_U32(ctx, 31, 0x287F6Cu);
    ctx->pc = 0x287F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F64u;
    // 0x287f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x287F64u, 0x287F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F6Cu;
label_287f6c:
    // 0x287f6c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x287F6Cu;
    {
        const bool branch_taken_0x287f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287f6c) {
            ctx->pc = 0x287F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287F6Cu;
            // 0x287f70: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287F8Cu;
            goto label_287f8c;
        }
    }
    ctx->pc = 0x287F74u;
    // 0x287f74: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x287F74u;
    {
        const bool branch_taken_0x287f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F74u;
        // 0x287f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f74) {
            ctx->pc = 0x28803Cu;
            goto label_28803c;
        }
    }
    ctx->pc = 0x287F7Cu;
label_287f7c:
    // 0x287f7c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287F7Cu;
    {
        const bool branch_taken_0x287f7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x287f7c) {
            ctx->pc = 0x287F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287F7Cu;
            // 0x287f80: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287F8Cu;
            goto label_287f8c;
        }
    }
    ctx->pc = 0x287F84u;
    // 0x287f84: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x287F84u;
    {
        const bool branch_taken_0x287f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F84u;
        // 0x287f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f84) {
            ctx->pc = 0x28803Cu;
            goto label_28803c;
        }
    }
    ctx->pc = 0x287F8Cu;
label_287f8c:
    // 0x287f8c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x287f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x287f90: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x287f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_287f94:
    // 0x287f94: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x287f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x287f98: 0xf24023  subu        $t0, $a3, $s2
    ctx->pc = 0x287f98u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x287f9c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x287f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x287fa0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x287fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x287fa4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x287fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x287fa8: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x287FA8u;
    {
        const bool branch_taken_0x287fa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x287FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FA8u;
        // 0x287fac: 0xae080004  sw          $t0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fa8) {
            ctx->pc = 0x287FE4u;
            goto label_287fe4;
        }
    }
    ctx->pc = 0x287FB0u;
    // 0x287fb0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x287fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x287fb4: 0x1880001e  blez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x287FB4u;
    {
        const bool branch_taken_0x287fb4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x287fb4) {
            ctx->pc = 0x288030u;
            goto label_288030;
        }
    }
    ctx->pc = 0x287FBCu;
    // 0x287fbc: 0x0  nop
    ctx->pc = 0x287fbcu;
    // NOP
label_287fc0:
    // 0x287fc0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x287fc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x287fc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x287fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x287fc8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x287fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x287fcc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x287fccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x287fd0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x287fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x287fd4: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x287FD4u;
    {
        const bool branch_taken_0x287fd4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x287fd4) {
            ctx->pc = 0x287FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287fc0;
        }
    }
    ctx->pc = 0x287FDCu;
    // 0x287fdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x287FDCu;
    {
        const bool branch_taken_0x287fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287fdc) {
            ctx->pc = 0x288030u;
            goto label_288030;
        }
    }
    ctx->pc = 0x287FE4u;
label_287fe4:
    // 0x287fe4: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x287fe4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x287fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x287fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287fec: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x287fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x287ff0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x287FF0u;
    {
        const bool branch_taken_0x287ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FF0u;
        // 0x287ff4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ff0) {
            ctx->pc = 0x288024u;
            goto label_288024;
        }
    }
    ctx->pc = 0x287FF8u;
    // 0x287ff8: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x287ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x287ffc: 0x0  nop
    ctx->pc = 0x287ffcu;
    // NOP
label_288000:
    // 0x288000: 0x2261816  dsrlv       $v1, $a2, $s1
    ctx->pc = 0x288000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) >> (GPR_U32(ctx, 17) & 0x3F));
    // 0x288004: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x288004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x288008: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x288008u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28800c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x28800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x288010: 0x2861014  dsllv       $v0, $a2, $s4
    ctx->pc = 0x288010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x288014: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x288014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x288018: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x288018u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x28801c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28801Cu;
    {
        const bool branch_taken_0x28801c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x288020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28801Cu;
        // 0x288020: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28801c) {
            ctx->pc = 0x288000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288000;
        }
    }
    ctx->pc = 0x288024u;
label_288024:
    // 0x288024: 0x2261016  dsrlv       $v0, $a2, $s1
    ctx->pc = 0x288024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> (GPR_U32(ctx, 17) & 0x3F));
    // 0x288028: 0xfce00008  sd          $zero, 0x8($a3)
    ctx->pc = 0x288028u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 0));
    // 0x28802c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x28802cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_288030:
    // 0x288030: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x288030u;
    SET_GPR_U32(ctx, 31, 0x288038u);
    ctx->pc = 0x288034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288030u;
    // 0x288034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x288030u, 0x288038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288038u;
label_288038:
    // 0x288038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28803c:
    // 0x28803c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28803cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288040: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x288040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288044: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x288044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288048: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x288048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28804c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28804cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288054: 0x3e00008  jr          $ra
    ctx->pc = 0x288054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288054u;
        // 0x288058: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28805Cu;
    // 0x28805c: 0x0  nop
    ctx->pc = 0x28805cu;
    // NOP
    if (ctx->pc == 0x28805cu) { ctx->pc = 0x288060u; }
}
