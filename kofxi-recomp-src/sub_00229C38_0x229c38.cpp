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

// Function: sub_00229C38
// Address: 0x229c38 - 0x22a290
void sub_00229C38_0x229c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229C38_0x229c38");
#endif

    switch (ctx->pc) {
        case 0x229c70u: goto label_229c70;
        case 0x229cacu: goto label_229cac;
        case 0x229cb8u: goto label_229cb8;
        case 0x229df8u: goto label_229df8;
        case 0x229e94u: goto label_229e94;
        case 0x229eacu: goto label_229eac;
        case 0x229f00u: goto label_229f00;
        case 0x229fecu: goto label_229fec;
        case 0x229ffcu: goto label_229ffc;
        case 0x22a028u: goto label_22a028;
        case 0x22a110u: goto label_22a110;
        case 0x22a190u: goto label_22a190;
        case 0x22a1e8u: goto label_22a1e8;
        case 0x22a23cu: goto label_22a23c;
        default: break;
    }

    ctx->pc = 0x229c38u;

    // 0x229c38: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x229c38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229c3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x229c40: 0x8ce6a724  lw          $a2, -0x58DC($a3)
    ctx->pc = 0x229c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944548)));
    // 0x229c44: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x229c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x229c48: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x229C48u;
    {
        const bool branch_taken_0x229c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C48u;
        // 0x229c4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c48) {
            ctx->pc = 0x229C98u;
            goto label_229c98;
        }
    }
    ctx->pc = 0x229C50u;
    // 0x229c50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x229c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229c54: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x229c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x229c58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x229C58u;
    {
        const bool branch_taken_0x229c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C58u;
        // 0x229c5c: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c58) {
            ctx->pc = 0x229CA0u;
            goto label_229ca0;
        }
    }
    ctx->pc = 0x229C60u;
    // 0x229c60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229C60u;
    {
        const bool branch_taken_0x229c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C60u;
        // 0x229c64: 0x8ce2a724  lw          $v0, -0x58DC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c60) {
            ctx->pc = 0x229C70u;
            goto label_229c70;
        }
    }
    ctx->pc = 0x229C68u;
    // 0x229c68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x229C68u;
    {
        const bool branch_taken_0x229c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C68u;
        // 0x229c6c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c68) {
            ctx->pc = 0x229C8Cu;
            goto label_229c8c;
        }
    }
    ctx->pc = 0x229C70u;
label_229c70:
    // 0x229c70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x229c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x229c74: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x229c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x229c78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x229C78u;
    {
        const bool branch_taken_0x229c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C78u;
        // 0x229c7c: 0x831024  and         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c78) {
            ctx->pc = 0x229CA0u;
            goto label_229ca0;
        }
    }
    ctx->pc = 0x229C80u;
    // 0x229c80: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x229C80u;
    {
        const bool branch_taken_0x229c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C80u;
        // 0x229c84: 0x8ce2a724  lw          $v0, -0x58DC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c80) {
            ctx->pc = 0x229C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229c70;
        }
    }
    ctx->pc = 0x229C88u;
    // 0x229c88: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x229c88u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_229c8c:
    // 0x229c8c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x229c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x229c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229C90u;
    {
        const bool branch_taken_0x229c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C90u;
        // 0x229c94: 0xa4102b  sltu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c90) {
            ctx->pc = 0x229CA4u;
            goto label_229ca4;
        }
    }
    ctx->pc = 0x229C98u;
label_229c98:
    // 0x229c98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229C98u;
    {
        const bool branch_taken_0x229c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C98u;
        // 0x229c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c98) {
            ctx->pc = 0x229CACu;
            goto label_229cac;
        }
    }
    ctx->pc = 0x229CA0u;
label_229ca0:
    // 0x229ca0: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x229ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_229ca4:
    // 0x229ca4: 0xc098552  jal         func_261548
    ctx->pc = 0x229CA4u;
    SET_GPR_U32(ctx, 31, 0x229CACu);
    ctx->pc = 0x229CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CA4u;
    // 0x229ca8: 0xa2200a  movz        $a0, $a1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x229CA4u, 0x229CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CACu;
label_229cac:
    // 0x229cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x229CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CB0u;
        // 0x229cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229CB8u;
label_229cb8:
    // 0x229cb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x229cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x229cbc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x229cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229cc0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x229cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x229cc4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x229cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229cc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x229cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229ccc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x229cccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229cd0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x229cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x229cd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229cd8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x229cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x229cdc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x229cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x229ce0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x229ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x229ce4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x229ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x229ce8: 0x14ca000d  bne         $a2, $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x229CE8u;
    {
        const bool branch_taken_0x229ce8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x229CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CE8u;
        // 0x229cec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ce8) {
            ctx->pc = 0x229D20u;
            goto label_229d20;
        }
    }
    ctx->pc = 0x229CF0u;
    // 0x229cf0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229cf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x229cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229cf8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x229cf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229cfc: 0x24844428  addiu       $a0, $a0, 0x4428
    ctx->pc = 0x229cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17448));
    // 0x229d00: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x229d00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229d04: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x229d04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229d08: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x229d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229d0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x229d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229d10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x229d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229d18: 0x808a2b4  j           func_228AD0
    ctx->pc = 0x229D18u;
    ctx->pc = 0x229D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D18u;
    // 0x229d1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    sub_00228AD0_0x228ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x229D20u;
label_229d20:
    // 0x229d20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229d24: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229D24u;
    {
        const bool branch_taken_0x229d24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x229D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D24u;
        // 0x229d28: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d24) {
            ctx->pc = 0x229D5Cu;
            goto label_229d5c;
        }
    }
    ctx->pc = 0x229D2Cu;
    // 0x229d2c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229d30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x229d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229d34: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x229d34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229d38: 0x24844410  addiu       $a0, $a0, 0x4410
    ctx->pc = 0x229d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
    // 0x229d3c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x229d3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229d40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x229d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229d44: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x229d44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229d48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x229d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229d4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x229d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229d54: 0x808a2b4  j           func_228AD0
    ctx->pc = 0x229D54u;
    ctx->pc = 0x229D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D54u;
    // 0x229d58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    sub_00228AD0_0x228ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x229D5Cu;
label_229d5c:
    // 0x229d5c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x229d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x229d60: 0x8c62a73c  lw          $v0, -0x58C4($v1)
    ctx->pc = 0x229d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944572)));
    // 0x229d64: 0x8c85a72c  lw          $a1, -0x58D4($a0)
    ctx->pc = 0x229d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944556)));
    // 0x229d68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x229d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x229d6c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x229d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x229d70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229D70u;
    {
        const bool branch_taken_0x229d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D70u;
        // 0x229d74: 0x3c0901c1  lui         $t1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d70) {
            ctx->pc = 0x229DA8u;
            goto label_229da8;
        }
    }
    ctx->pc = 0x229D78u;
    // 0x229d78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229d7c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x229d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229d80: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x229d80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229d84: 0x248443b8  addiu       $a0, $a0, 0x43B8
    ctx->pc = 0x229d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
    // 0x229d88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x229d88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229d8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x229d8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229d90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x229d90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229d94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x229d94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229d98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x229d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229da0: 0x808a2b4  j           func_228AD0
    ctx->pc = 0x229DA0u;
    ctx->pc = 0x229DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DA0u;
    // 0x229da4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    sub_00228AD0_0x228ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x229DA8u;
label_229da8:
    // 0x229da8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x229da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x229dac: 0x8d24a748  lw          $a0, -0x58B8($t1)
    ctx->pc = 0x229dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294944584)));
    // 0x229db0: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x229db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x229db4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x229db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x229db8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x229db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x229dbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x229dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x229dc0: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x229dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x229dc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x229dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x229dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229dcc: 0x1444001a  bne         $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x229DCCu;
    {
        const bool branch_taken_0x229dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x229DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DCCu;
        // 0x229dd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dcc) {
            ctx->pc = 0x229E38u;
            goto label_229e38;
        }
    }
    ctx->pc = 0x229DD4u;
    // 0x229dd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x229dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229dd8: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x229dd8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x229ddc: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x229ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x229de0: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x229de0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x229de4: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x229de4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x229de8: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x229de8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x229dec: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x229decu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x229df0: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x229df0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x229df4: 0x0  nop
    ctx->pc = 0x229df4u;
    // NOP
label_229df8:
    // 0x229df8: 0x8d25a748  lw          $a1, -0x58B8($t1)
    ctx->pc = 0x229df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294944584)));
    // 0x229dfc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x229dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x229e00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x229e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x229e04: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x229e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x229e08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x229e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x229e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229e10: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x229e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e14: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x229e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x229e18: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x229e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x229e1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x229e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229e20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x229e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x229e24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x229e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229e28: 0x1044fff3  beq         $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x229E28u;
    {
        const bool branch_taken_0x229e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x229E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E28u;
        // 0x229e2c: 0x8d44a724  lw          $a0, -0x58DC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294944548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e28) {
            ctx->pc = 0x229DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229df8;
        }
    }
    ctx->pc = 0x229E30u;
    // 0x229e30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x229E30u;
    {
        const bool branch_taken_0x229e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E30u;
        // 0x229e34: 0x8da2a798  lw          $v0, -0x5868($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294944664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e30) {
            ctx->pc = 0x229E5Cu;
            goto label_229e5c;
        }
    }
    ctx->pc = 0x229E38u;
label_229e38:
    // 0x229e38: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x229e38u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x229e3c: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x229e3cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x229e40: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x229e40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x229e44: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x229e44u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x229e48: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x229e48u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x229e4c: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x229e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x229e50: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x229e50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x229e54: 0x8d44a724  lw          $a0, -0x58DC($t2)
    ctx->pc = 0x229e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294944548)));
    // 0x229e58: 0x8da2a798  lw          $v0, -0x5868($t5)
    ctx->pc = 0x229e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294944664)));
label_229e5c:
    // 0x229e5c: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x229e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x229e60: 0x8dc3a794  lw          $v1, -0x586C($t6)
    ctx->pc = 0x229e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294944660)));
    // 0x229e64: 0x8d65a728  lw          $a1, -0x58D8($t3)
    ctx->pc = 0x229e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294944552)));
    // 0x229e68: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x229e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x229e6c: 0x8d86a77c  lw          $a2, -0x5884($t4)
    ctx->pc = 0x229e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294944636)));
    // 0x229e70: 0xa79004  sllv        $s2, $a3, $a1
    ctx->pc = 0x229e70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x229e74: 0xada2a798  sw          $v0, -0x5868($t5)
    ctx->pc = 0x229e74u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294944664), GPR_U32(ctx, 2));
    // 0x229e78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x229e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x229e7c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x229E7Cu;
    {
        const bool branch_taken_0x229e7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E7Cu;
        // 0x229e80: 0xadc3a794  sw          $v1, -0x586C($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4294944660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e7c) {
            ctx->pc = 0x229E94u;
            goto label_229e94;
        }
    }
    ctx->pc = 0x229E84u;
    // 0x229e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e88: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x229e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x229e8c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x229E8Cu;
    SET_GPR_U32(ctx, 31, 0x229E94u);
    ctx->pc = 0x229E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E8Cu;
    // 0x229e90: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x229E8Cu, 0x229E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E94u;
label_229e94:
    // 0x229e94: 0x2328021  addu        $s0, $s1, $s2
    ctx->pc = 0x229e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x229e98: 0x8e62a780  lw          $v0, -0x5880($s3)
    ctx->pc = 0x229e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944640)));
    // 0x229e9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229E9Cu;
    {
        const bool branch_taken_0x229e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E9Cu;
        // 0x229ea0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e9c) {
            ctx->pc = 0x229EB0u;
            goto label_229eb0;
        }
    }
    ctx->pc = 0x229EA4u;
    // 0x229ea4: 0xc08a45c  jal         func_229170
    ctx->pc = 0x229EA4u;
    SET_GPR_U32(ctx, 31, 0x229EACu);
    ctx->pc = 0x229EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EA4u;
    // 0x229ea8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229170u, 0x229EA4u, 0x229EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EACu;
label_229eac:
    // 0x229eac: 0xae62a780  sw          $v0, -0x5880($s3)
    ctx->pc = 0x229eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294944640), GPR_U32(ctx, 2));
label_229eb0:
    // 0x229eb0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x229eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x229eb4: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x229eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x229eb8: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x229eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x229ebc: 0x8e83a750  lw          $v1, -0x58B0($s4)
    ctx->pc = 0x229ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944592)));
    // 0x229ec0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x229EC0u;
    {
        const bool branch_taken_0x229ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EC0u;
        // 0x229ec4: 0x2684a750  addiu       $a0, $s4, -0x58B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ec0) {
            ctx->pc = 0x229EDCu;
            goto label_229edc;
        }
    }
    ctx->pc = 0x229EC8u;
    // 0x229ec8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x229ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x229ecc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x229eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x229ed0: 0xae82a750  sw          $v0, -0x58B0($s4)
    ctx->pc = 0x229ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294944592), GPR_U32(ctx, 2));
    // 0x229ed4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x229ED4u;
    {
        const bool branch_taken_0x229ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ED4u;
        // 0x229ed8: 0xae60a780  sw          $zero, -0x5880($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294944640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ed4) {
            ctx->pc = 0x229FECu;
            goto label_229fec;
        }
    }
    ctx->pc = 0x229EDCu;
label_229edc:
    // 0x229edc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x229edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ee0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x229ee4: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x229ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x229ee8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x229EE8u;
    {
        const bool branch_taken_0x229ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ee8) {
            ctx->pc = 0x229EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229EE8u;
            // 0x229eec: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229F24u;
            goto label_229f24;
        }
    }
    ctx->pc = 0x229EF0u;
    // 0x229ef0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x229ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x229ef4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x229EF4u;
    {
        const bool branch_taken_0x229ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EF4u;
        // 0x229ef8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ef4) {
            ctx->pc = 0x229F20u;
            goto label_229f20;
        }
    }
    ctx->pc = 0x229EFCu;
    // 0x229efc: 0x0  nop
    ctx->pc = 0x229efcu;
    // NOP
label_229f00:
    // 0x229f00: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x229f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f04: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x229f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x229f08: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x229f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x229f0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x229F0Cu;
    {
        const bool branch_taken_0x229f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f0c) {
            ctx->pc = 0x229F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229F0Cu;
            // 0x229f10: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229F24u;
            goto label_229f24;
        }
    }
    ctx->pc = 0x229F14u;
    // 0x229f14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x229f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x229f18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x229F18u;
    {
        const bool branch_taken_0x229f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F18u;
        // 0x229f1c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f18) {
            ctx->pc = 0x229F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229f00;
        }
    }
    ctx->pc = 0x229F20u;
label_229f20:
    // 0x229f20: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x229f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_229f24:
    // 0x229f24: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x229f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x229f28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x229F28u;
    {
        const bool branch_taken_0x229f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F28u;
        // 0x229f2c: 0x8e62a780  lw          $v0, -0x5880($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f28) {
            ctx->pc = 0x229F50u;
            goto label_229f50;
        }
    }
    ctx->pc = 0x229F30u;
    // 0x229f30: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x229f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x229f34: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x229f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x229f38: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x229f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x229f3c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x229f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x229f40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x229f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x229f44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x229f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x229f48: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x229F48u;
    {
        const bool branch_taken_0x229f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F48u;
        // 0x229f4c: 0xae60a780  sw          $zero, -0x5880($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294944640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f48) {
            ctx->pc = 0x229FECu;
            goto label_229fec;
        }
    }
    ctx->pc = 0x229F50u;
label_229f50:
    // 0x229f50: 0x14910015  bne         $a0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x229F50u;
    {
        const bool branch_taken_0x229f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x229f50) {
            ctx->pc = 0x229FA8u;
            goto label_229fa8;
        }
    }
    ctx->pc = 0x229F58u;
    // 0x229f58: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x229f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x229f5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x229f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x229f60: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x229f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x229f64: 0xacb0000c  sw          $s0, 0xC($a1)
    ctx->pc = 0x229f64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 16));
    // 0x229f68: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x229F68u;
    {
        const bool branch_taken_0x229f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F68u;
        // 0x229f6c: 0xaca40010  sw          $a0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f68) {
            ctx->pc = 0x229FECu;
            goto label_229fec;
        }
    }
    ctx->pc = 0x229F70u;
    // 0x229f70: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x229f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x229f74: 0x16a2001d  bne         $s5, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x229F74u;
    {
        const bool branch_taken_0x229f74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x229f74) {
            ctx->pc = 0x229FECu;
            goto label_229fec;
        }
    }
    ctx->pc = 0x229F7Cu;
    // 0x229f7c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x229f7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f80: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x229f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x229f84: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x229f84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x229f88: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x229f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x229f8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x229f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x229f90: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x229f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x229f94: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x229f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x229f98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x229F98u;
    {
        const bool branch_taken_0x229f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F98u;
        // 0x229f9c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f98) {
            ctx->pc = 0x229FECu;
            goto label_229fec;
        }
    }
    ctx->pc = 0x229FA0u;
    // 0x229fa0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x229FA0u;
    {
        const bool branch_taken_0x229fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FA0u;
        // 0x229fa4: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fa0) {
            ctx->pc = 0x229FECu;
            goto label_229fec;
        }
    }
    ctx->pc = 0x229FA8u;
label_229fa8:
    // 0x229fa8: 0x54700006  bnel        $v1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229FA8u;
    {
        const bool branch_taken_0x229fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x229fa8) {
            ctx->pc = 0x229FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229FA8u;
            // 0x229fac: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229FC4u;
            goto label_229fc4;
        }
    }
    ctx->pc = 0x229FB0u;
    // 0x229fb0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x229fb4: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x229fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
    // 0x229fb8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x229fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x229fbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x229FBCu;
    {
        const bool branch_taken_0x229fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FBCu;
        // 0x229fc0: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fbc) {
            ctx->pc = 0x229FECu;
            goto label_229fec;
        }
    }
    ctx->pc = 0x229FC4u;
label_229fc4:
    // 0x229fc4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229FC4u;
    {
        const bool branch_taken_0x229fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FC4u;
        // 0x229fc8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fc4) {
            ctx->pc = 0x229FE4u;
            goto label_229fe4;
        }
    }
    ctx->pc = 0x229FCCu;
    // 0x229fcc: 0x8e62a780  lw          $v0, -0x5880($s3)
    ctx->pc = 0x229fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944640)));
    // 0x229fd0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x229fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x229fd4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x229fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x229fd8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x229fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x229fdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x229FDCu;
    {
        const bool branch_taken_0x229fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FDCu;
        // 0x229fe0: 0xae60a780  sw          $zero, -0x5880($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294944640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fdc) {
            ctx->pc = 0x229FECu;
            goto label_229fec;
        }
    }
    ctx->pc = 0x229FE4u;
label_229fe4:
    // 0x229fe4: 0xc08a29c  jal         func_228A70
    ctx->pc = 0x229FE4u;
    SET_GPR_U32(ctx, 31, 0x229FECu);
    ctx->pc = 0x229FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FE4u;
    // 0x229fe8: 0x24844440  addiu       $a0, $a0, 0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228A70u, 0x229FE4u, 0x229FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FECu;
label_229fec:
    // 0x229fec: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x229FECu;
    {
        const bool branch_taken_0x229fec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x229FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FECu;
        // 0x229ff0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fec) {
            ctx->pc = 0x22A000u;
            goto label_22a000;
        }
    }
    ctx->pc = 0x229FF4u;
    // 0x229ff4: 0xc08a534  jal         func_2294D0
    ctx->pc = 0x229FF4u;
    SET_GPR_U32(ctx, 31, 0x229FFCu);
    ctx->pc = 0x229FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FF4u;
    // 0x229ff8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2294D0u, 0x229FF4u, 0x229FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FFCu;
label_229ffc:
    // 0x229ffc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x229ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22a000:
    // 0x22a000: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22a000u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22a004: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22a004u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a008: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22a008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a00c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a00cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a010: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a014: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a01c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A01Cu;
        // 0x22a020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A024u;
    // 0x22a024: 0x0  nop
    ctx->pc = 0x22a024u;
    // NOP
label_22a028:
    // 0x22a028: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a02c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x22a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x22a030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a034: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22a034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a038: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a03c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22a03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a040: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22a040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22a044: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x22a044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x22a048: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22a04c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22a04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a050: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a054: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a058: 0x8c43a73c  lw          $v1, -0x58C4($v0)
    ctx->pc = 0x22a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944572)));
    // 0x22a05c: 0x8cc2a72c  lw          $v0, -0x58D4($a2)
    ctx->pc = 0x22a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944556)));
    // 0x22a060: 0x96080008  lhu         $t0, 0x8($s0)
    ctx->pc = 0x22a060u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22a064: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x22a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22a068: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22a068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22a06c: 0x9606000a  lhu         $a2, 0xA($s0)
    ctx->pc = 0x22a06cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x22a070: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x22a070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x22a074: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22a074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x22a078: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22A078u;
    {
        const bool branch_taken_0x22a078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A078u;
        // 0x22a07c: 0xc22006  srlv        $a0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a078) {
            ctx->pc = 0x22A0A8u;
            goto label_22a0a8;
        }
    }
    ctx->pc = 0x22A080u;
    // 0x22a080: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22a080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22a084: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a088: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22a088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a08c: 0x248443d8  addiu       $a0, $a0, 0x43D8
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x22a090: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a094: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a098: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a09c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a0a0: 0x808a2b4  j           func_228AD0
    ctx->pc = 0x22A0A0u;
    ctx->pc = 0x22A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0A0u;
    // 0x22a0a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    sub_00228AD0_0x228ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x22A0A8u;
label_22a0a8:
    // 0x22a0a8: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x22a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x22a0ac: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x22a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22a0b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a0b4: 0x3093001f  andi        $s3, $a0, 0x1F
    ctx->pc = 0x22a0b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x22a0b8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x22a0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a0bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22a0c0: 0x2651007  srav        $v0, $a1, $s3
    ctx->pc = 0x22a0c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 19) & 0x1F));
    // 0x22a0c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22a0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22a0c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22A0C8u;
    {
        const bool branch_taken_0x22a0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0C8u;
        // 0x22a0cc: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0c8) {
            ctx->pc = 0x22A0F8u;
            goto label_22a0f8;
        }
    }
    ctx->pc = 0x22A0D0u;
    // 0x22a0d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22a0d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a0d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22a0d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a0dc: 0x248443f8  addiu       $a0, $a0, 0x43F8
    ctx->pc = 0x22a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17400));
    // 0x22a0e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a0e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a0e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a0e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a0e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a0f0: 0x808a2b4  j           func_228AD0
    ctx->pc = 0x22A0F0u;
    ctx->pc = 0x22A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0F0u;
    // 0x22a0f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    sub_00228AD0_0x228ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x22A0F8u;
label_22a0f8:
    // 0x22a0f8: 0x8c43a77c  lw          $v1, -0x5884($v0)
    ctx->pc = 0x22a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944636)));
    // 0x22a0fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A0FCu;
    {
        const bool branch_taken_0x22a0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0FCu;
        // 0x22a100: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0fc) {
            ctx->pc = 0x22A114u;
            goto label_22a114;
        }
    }
    ctx->pc = 0x22A104u;
    // 0x22a104: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x22a104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a108: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x22A108u;
    SET_GPR_U32(ctx, 31, 0x22A110u);
    ctx->pc = 0x22A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A108u;
    // 0x22a10c: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x22A108u, 0x22A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A110u;
label_22a110:
    // 0x22a110: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22a110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a114:
    // 0x22a114: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a118: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x22a118u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x22a11c: 0x2671004  sllv        $v0, $a3, $s3
    ctx->pc = 0x22a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 19) & 0x1F));
    // 0x22a120: 0x8e84a794  lw          $a0, -0x586C($s4)
    ctx->pc = 0x22a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944660)));
    // 0x22a124: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x22a124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x22a128: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x22a128u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x22a12c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x22a130: 0x8d26a748  lw          $a2, -0x58B8($t1)
    ctx->pc = 0x22a130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294944584)));
    // 0x22a134: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x22a134u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22a138: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x22a138u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22a13c: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x22a13cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x22a140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a144: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x22a144u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22a148: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x22a148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x22a14c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22a150: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22a150u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a154: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x22a154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22a158: 0x1507001a  bne         $t0, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x22A158u;
    {
        const bool branch_taken_0x22a158 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x22A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A158u;
        // 0x22a15c: 0xae84a794  sw          $a0, -0x586C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294944660), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a158) {
            ctx->pc = 0x22A1C4u;
            goto label_22a1c4;
        }
    }
    ctx->pc = 0x22A160u;
    // 0x22a160: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22a164: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22A164u;
    {
        const bool branch_taken_0x22a164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A164u;
        // 0x22a168: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a164) {
            ctx->pc = 0x22A1B8u;
            goto label_22a1b8;
        }
    }
    ctx->pc = 0x22A16Cu;
    // 0x22a16c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a170: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x22A170u;
    {
        const bool branch_taken_0x22a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a170) {
            ctx->pc = 0x22A174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A170u;
            // 0x22a174: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A1BCu;
            goto label_22a1bc;
        }
    }
    ctx->pc = 0x22A178u;
    // 0x22a178: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22a17c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x22a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22a180: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x22a180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x22a184: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22A184u;
    {
        const bool branch_taken_0x22a184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a184) {
            ctx->pc = 0x22A188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A184u;
            // 0x22a188: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A1BCu;
            goto label_22a1bc;
        }
    }
    ctx->pc = 0x22A18Cu;
    // 0x22a18c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22a18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22a190:
    // 0x22a190: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22a194: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A194u;
    {
        const bool branch_taken_0x22a194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A194u;
        // 0x22a198: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a194) {
            ctx->pc = 0x22A1B8u;
            goto label_22a1b8;
        }
    }
    ctx->pc = 0x22A19Cu;
    // 0x22a19c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a1a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A1A0u;
    {
        const bool branch_taken_0x22a1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a1a0) {
            ctx->pc = 0x22A1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A1A0u;
            // 0x22a1a4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A1BCu;
            goto label_22a1bc;
        }
    }
    ctx->pc = 0x22A1A8u;
    // 0x22a1a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22a1ac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x22a1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x22a1b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22A1B0u;
    {
        const bool branch_taken_0x22a1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a1b0) {
            ctx->pc = 0x22A1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A1B0u;
            // 0x22a1b4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a190;
        }
    }
    ctx->pc = 0x22A1B8u;
label_22a1b8:
    // 0x22a1b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_22a1bc:
    // 0x22a1bc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x22A1BCu;
    {
        const bool branch_taken_0x22a1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1BCu;
        // 0x22a1c0: 0xacd00000  sw          $s0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1bc) {
            ctx->pc = 0x22A270u;
            goto label_22a270;
        }
    }
    ctx->pc = 0x22A1C4u;
label_22a1c4:
    // 0x22a1c4: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x22a1c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x22a1c8: 0x1502002a  bne         $t0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22A1C8u;
    {
        const bool branch_taken_0x22a1c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1C8u;
        // 0x22a1cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1c8) {
            ctx->pc = 0x22A274u;
            goto label_22a274;
        }
    }
    ctx->pc = 0x22A1D0u;
    // 0x22a1d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22a1d4: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x22A1D4u;
    {
        const bool branch_taken_0x22a1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x22A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1D4u;
        // 0x22a1d8: 0x122880  sll         $a1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1d4) {
            ctx->pc = 0x22A20Cu;
            goto label_22a20c;
        }
    }
    ctx->pc = 0x22A1DCu;
    // 0x22a1dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a1e0: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x22a1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x22a1e4: 0x0  nop
    ctx->pc = 0x22a1e4u;
    // NOP
label_22a1e8:
    // 0x22a1e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x22a1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22a1f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22a1f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1f4: 0x0  nop
    ctx->pc = 0x22a1f4u;
    // NOP
    // 0x22a1f8: 0x0  nop
    ctx->pc = 0x22a1f8u;
    // NOP
    // 0x22a1fc: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22A1FCu;
    {
        const bool branch_taken_0x22a1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x22a1fc) {
            ctx->pc = 0x22A1E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a1e8;
        }
    }
    ctx->pc = 0x22A204u;
    // 0x22a204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22A204u;
    {
        const bool branch_taken_0x22a204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A204u;
        // 0x22a208: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a204) {
            ctx->pc = 0x22A218u;
            goto label_22a218;
        }
    }
    ctx->pc = 0x22A20Cu;
label_22a20c:
    // 0x22a20c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a210: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x22a210u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x22a214: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x22a214u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_22a218:
    // 0x22a218: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22a218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a21c: 0x8d22a748  lw          $v0, -0x58B8($t1)
    ctx->pc = 0x22a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294944584)));
    // 0x22a220: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a224: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22a224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22a228: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x22a228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22a22c: 0x12300004  beq         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A22Cu;
    {
        const bool branch_taken_0x22a22c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x22A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A22Cu;
        // 0x22a230: 0x8e82a794  lw          $v0, -0x586C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a22c) {
            ctx->pc = 0x22A240u;
            goto label_22a240;
        }
    }
    ctx->pc = 0x22A234u;
    // 0x22a234: 0xc08a534  jal         func_2294D0
    ctx->pc = 0x22A234u;
    SET_GPR_U32(ctx, 31, 0x22A23Cu);
    ctx->pc = 0x22A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A234u;
    // 0x22a238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2294D0u, 0x22A234u, 0x22A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A23Cu;
label_22a23c:
    // 0x22a23c: 0x8e82a794  lw          $v0, -0x586C($s4)
    ctx->pc = 0x22a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944660)));
label_22a240:
    // 0x22a240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a244: 0x8e43a724  lw          $v1, -0x58DC($s2)
    ctx->pc = 0x22a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944548)));
    // 0x22a248: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a24c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22a250: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a254: 0xae82a794  sw          $v0, -0x586C($s4)
    ctx->pc = 0x22a254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294944660), GPR_U32(ctx, 2));
    // 0x22a258: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22a258u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a25c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a25cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a260: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a268: 0x808a534  j           func_2294D0
    ctx->pc = 0x22A268u;
    ctx->pc = 0x22A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A268u;
    // 0x22a26c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    sub_002294D0_0x2294d0(rdram, ctx, runtime); return;
    ctx->pc = 0x22A270u;
label_22a270:
    // 0x22a270: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22a274:
    // 0x22a274: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22a274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a278: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a27c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a280: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a288: 0x3e00008  jr          $ra
    ctx->pc = 0x22A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A288u;
        // 0x22a28c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A290u;
}
