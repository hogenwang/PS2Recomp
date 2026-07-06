#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027BCC8
// Address: 0x27bcc8 - 0x27bdb0
void sub_0027BCC8_0x27bcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BCC8_0x27bcc8");
#endif

    switch (ctx->pc) {
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd78u: goto label_27bd78;
        case 0x27bd90u: goto label_27bd90;
        default: break;
    }

    ctx->pc = 0x27bcc8u;

    // 0x27bcc8: 0x3c0701c3  lui         $a3, 0x1C3
    ctx->pc = 0x27bcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)451 << 16));
    // 0x27bccc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bcccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bcd0: 0x8ce6538c  lw          $a2, 0x538C($a3)
    ctx->pc = 0x27bcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 21388)));
    // 0x27bcd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27bcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bcd8: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x27bcd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x27bcdc: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x27BCDCu;
    {
        const bool branch_taken_0x27bcdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BCDCu;
            // 0x27bce0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcdc) {
            ctx->pc = 0x27BD68u;
            goto label_27bd68;
        }
    }
    ctx->pc = 0x27BCE4u;
    // 0x27bce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27bce8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x27bce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x27bcec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27BCECu;
    {
        const bool branch_taken_0x27bcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BCECu;
            // 0x27bcf0: 0xa4102b  sltu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcec) {
            ctx->pc = 0x27BD54u;
            goto label_27bd54;
        }
    }
    ctx->pc = 0x27BCF4u;
    // 0x27bcf4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x27bcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27bcf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BCF8u;
    {
        const bool branch_taken_0x27bcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BCF8u;
            // 0x27bcfc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcf8) {
            ctx->pc = 0x27BD18u;
            goto label_27bd18;
        }
    }
    ctx->pc = 0x27BD00u;
    // 0x27bd00: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x27bd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x27bd04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27BD04u;
    {
        const bool branch_taken_0x27bd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD04u;
            // 0x27bd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd04) {
            ctx->pc = 0x27BD50u;
            goto label_27bd50;
        }
    }
    ctx->pc = 0x27BD0Cu;
    // 0x27bd0c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27BD0Cu;
    {
        const bool branch_taken_0x27bd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD0Cu;
            // 0x27bd10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd0c) {
            ctx->pc = 0x27BD6Cu;
            goto label_27bd6c;
        }
    }
    ctx->pc = 0x27BD14u;
    // 0x27bd14: 0x0  nop
    ctx->pc = 0x27bd14u;
    // NOP
label_27bd18:
    // 0x27bd18: 0x8ce2538c  lw          $v0, 0x538C($a3)
    ctx->pc = 0x27bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 21388)));
label_27bd1c:
    // 0x27bd1c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x27bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27bd20: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x27bd20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27bd24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27BD24u;
    {
        const bool branch_taken_0x27bd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD24u;
            // 0x27bd28: 0x833024  and         $a2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd24) {
            ctx->pc = 0x27BD50u;
            goto label_27bd50;
        }
    }
    ctx->pc = 0x27BD2Cu;
    // 0x27bd2c: 0x0  nop
    ctx->pc = 0x27bd2cu;
    // NOP
    // 0x27bd30: 0x0  nop
    ctx->pc = 0x27bd30u;
    // NOP
    // 0x27bd34: 0x0  nop
    ctx->pc = 0x27bd34u;
    // NOP
    // 0x27bd38: 0x10c0fff8  beqz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27BD38u;
    {
        const bool branch_taken_0x27bd38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD38u;
            // 0x27bd3c: 0x8ce2538c  lw          $v0, 0x538C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 21388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd38) {
            ctx->pc = 0x27BD1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27bd1c;
        }
    }
    ctx->pc = 0x27BD40u;
    // 0x27bd40: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x27bd40u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x27bd44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27bd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27bd48: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BD48u;
    {
        const bool branch_taken_0x27bd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD48u;
            // 0x27bd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd48) {
            ctx->pc = 0x27BD68u;
            goto label_27bd68;
        }
    }
    ctx->pc = 0x27BD50u;
label_27bd50:
    // 0x27bd50: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x27bd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27bd54:
    // 0x27bd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bd58: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x27bd58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x27bd5c: 0x809ed08  j           func_27B420
    ctx->pc = 0x27BD5Cu;
    ctx->pc = 0x27BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD5Cu;
            // 0x27bd60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B420u;
    if (runtime->hasFunction(0x27B420u)) {
        auto targetFn = runtime->lookupFunction(0x27B420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0027B420_0x27b420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x27BD64u;
    // 0x27bd64: 0x0  nop
    ctx->pc = 0x27bd64u;
    // NOP
label_27bd68:
    // 0x27bd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27bd6c:
    // 0x27bd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD6Cu;
            // 0x27bd70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BD74u;
    // 0x27bd74: 0x0  nop
    ctx->pc = 0x27bd74u;
    // NOP
label_27bd78:
    // 0x27bd78: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27bd7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bd7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bd80: 0x8c443450  lw          $a0, 0x3450($v0)
    ctx->pc = 0x27bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13392)));
    // 0x27bd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bd88: 0xc043324  jal         func_10CC90
    ctx->pc = 0x27BD88u;
    SET_GPR_U32(ctx, 31, 0x27BD90u);
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD90u; }
        if (ctx->pc != 0x27BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD90u; }
        if (ctx->pc != 0x27BD90u) { return; }
    }
    ctx->pc = 0x27BD90u;
label_27bd90:
    // 0x27bd90: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x27bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x27bd94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bd98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27bd9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27bd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bda0: 0xac83354c  sw          $v1, 0x354C($a0)
    ctx->pc = 0x27bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13644), GPR_U32(ctx, 3));
    // 0x27bda4: 0x3e00008  jr          $ra
    ctx->pc = 0x27BDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BDA4u;
            // 0x27bda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BDACu;
    // 0x27bdac: 0x0  nop
    ctx->pc = 0x27bdacu;
    // NOP
    ctx->pc = 0x27bdb0u;
}
