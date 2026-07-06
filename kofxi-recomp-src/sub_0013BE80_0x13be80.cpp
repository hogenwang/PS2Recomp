#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013BE80
// Address: 0x13be80 - 0x13c1e0
void sub_0013BE80_0x13be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BE80_0x13be80");
#endif

    switch (ctx->pc) {
        case 0x13beacu: goto label_13beac;
        case 0x13bef4u: goto label_13bef4;
        case 0x13bf08u: goto label_13bf08;
        case 0x13bf34u: goto label_13bf34;
        case 0x13bf44u: goto label_13bf44;
        case 0x13c040u: goto label_13c040;
        case 0x13c078u: goto label_13c078;
        case 0x13c098u: goto label_13c098;
        case 0x13c0a8u: goto label_13c0a8;
        case 0x13c104u: goto label_13c104;
        case 0x13c130u: goto label_13c130;
        case 0x13c16cu: goto label_13c16c;
        case 0x13c1a0u: goto label_13c1a0;
        default: break;
    }

    ctx->pc = 0x13be80u;

    // 0x13be80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13be84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13be88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13be88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13be8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13be90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13be94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13be94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13be98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13be9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13bea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bea4: 0xc062804  jal         func_18A010
    ctx->pc = 0x13BEA4u;
    SET_GPR_U32(ctx, 31, 0x13BEACu);
    ctx->pc = 0x13BEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEA4u;
            // 0x13bea8: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEACu; }
        if (ctx->pc != 0x13BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEACu; }
        if (ctx->pc != 0x13BEACu) { return; }
    }
    ctx->pc = 0x13BEACu;
label_13beac:
    // 0x13beac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13beacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13beb0: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BEB0u;
    {
        const bool branch_taken_0x13beb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13beb0) {
            ctx->pc = 0x13BEB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEB0u;
            // 0x13beb4: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BEC0u;
            goto label_13bec0;
        }
    }
    ctx->pc = 0x13BEB8u;
    // 0x13beb8: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x13BEB8u;
    {
        const bool branch_taken_0x13beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEB8u;
            // 0x13bebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13beb8) {
            ctx->pc = 0x13C1B0u;
            goto label_13c1b0;
        }
    }
    ctx->pc = 0x13BEC0u;
label_13bec0:
    // 0x13bec0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13bec4: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x13bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x13bec8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13bec8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13becc: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x13beccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x13bed0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x13bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x13bed4: 0x38082  srl         $s0, $v1, 2
    ctx->pc = 0x13bed4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x13bed8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x13bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x13bedc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13bee0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13bee4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13bee8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13beec: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x13beecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13bef0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x13bef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bef4:
    // 0x13bef4: 0x8e6600a8  lw          $a2, 0xA8($s3)
    ctx->pc = 0x13bef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x13bef8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13befc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13befcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf00: 0xc04f078  jal         func_13C1E0
    ctx->pc = 0x13BF00u;
    SET_GPR_U32(ctx, 31, 0x13BF08u);
    ctx->pc = 0x13BF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF00u;
            // 0x13bf04: 0x27a7007c  addiu       $a3, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C1E0u;
    if (runtime->hasFunction(0x13C1E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF08u; }
        if (ctx->pc != 0x13BF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C1E0_0x13c1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF08u; }
        if (ctx->pc != 0x13BF08u) { return; }
    }
    ctx->pc = 0x13BF08u;
label_13bf08:
    // 0x13bf08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13bf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13bf0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13bf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13bf10: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BF10u;
    {
        const bool branch_taken_0x13bf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf10) {
            ctx->pc = 0x13BF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF10u;
            // 0x13bf14: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BF20u;
            goto label_13bf20;
        }
    }
    ctx->pc = 0x13BF18u;
    // 0x13bf18: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x13BF18u;
    {
        const bool branch_taken_0x13bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF18u;
            // 0x13bf1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf18) {
            ctx->pc = 0x13C1B0u;
            goto label_13c1b0;
        }
    }
    ctx->pc = 0x13BF20u;
label_13bf20:
    // 0x13bf20: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x13bf20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x13bf24: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x13BF24u;
    {
        const bool branch_taken_0x13bf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF24u;
            // 0x13bf28: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf24) {
            ctx->pc = 0x13BEF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13bef4;
        }
    }
    ctx->pc = 0x13BF2Cu;
    // 0x13bf2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13BF2Cu;
    {
        const bool branch_taken_0x13bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF2Cu;
            // 0x13bf30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf2c) {
            ctx->pc = 0x13BF58u;
            goto label_13bf58;
        }
    }
    ctx->pc = 0x13BF34u;
label_13bf34:
    // 0x13bf34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13bf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13bf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf3c: 0xc04f078  jal         func_13C1E0
    ctx->pc = 0x13BF3Cu;
    SET_GPR_U32(ctx, 31, 0x13BF44u);
    ctx->pc = 0x13BF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF3Cu;
            // 0x13bf40: 0x27a7007c  addiu       $a3, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C1E0u;
    if (runtime->hasFunction(0x13C1E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF44u; }
        if (ctx->pc != 0x13BF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C1E0_0x13c1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF44u; }
        if (ctx->pc != 0x13BF44u) { return; }
    }
    ctx->pc = 0x13BF44u;
label_13bf44:
    // 0x13bf44: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BF44u;
    {
        const bool branch_taken_0x13bf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf44) {
            ctx->pc = 0x13BF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF44u;
            // 0x13bf48: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BF54u;
            goto label_13bf54;
        }
    }
    ctx->pc = 0x13BF4Cu;
    // 0x13bf4c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x13BF4Cu;
    {
        const bool branch_taken_0x13bf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF4Cu;
            // 0x13bf50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf4c) {
            ctx->pc = 0x13C1B0u;
            goto label_13c1b0;
        }
    }
    ctx->pc = 0x13BF54u;
label_13bf54:
    // 0x13bf54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13bf54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_13bf58:
    // 0x13bf58: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x13bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x13bf5c: 0x9043f35b  lbu         $v1, -0xCA5($v0)
    ctx->pc = 0x13bf5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x13bf60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bf64: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13BF64u;
    {
        const bool branch_taken_0x13bf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13bf64) {
            ctx->pc = 0x13BF68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF64u;
            // 0x13bf68: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BF70u;
            goto label_13bf70;
        }
    }
    ctx->pc = 0x13BF6Cu;
    // 0x13bf6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_13bf70:
    // 0x13bf70: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x13bf70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13bf74: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13BF74u;
    {
        const bool branch_taken_0x13bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf74) {
            ctx->pc = 0x13BF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF74u;
            // 0x13bf78: 0x8e860100  lw          $a2, 0x100($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BF34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13bf34;
        }
    }
    ctx->pc = 0x13BF7Cu;
    // 0x13bf7c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x13bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x13bf80: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13BF80u;
    {
        const bool branch_taken_0x13bf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf80) {
            ctx->pc = 0x13BF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF80u;
            // 0x13bf84: 0x92430204  lbu         $v1, 0x204($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 516)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BFB4u;
            goto label_13bfb4;
        }
    }
    ctx->pc = 0x13BF88u;
    // 0x13bf88: 0x8e25023c  lw          $a1, 0x23C($s1)
    ctx->pc = 0x13bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13bf8c: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x13bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13bf90: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x13bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x13bf94: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x13bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13bf98: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13bf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13bf9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13bf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13bfa0: 0xae24023c  sw          $a0, 0x23C($s1)
    ctx->pc = 0x13bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 4));
    // 0x13bfa4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13bfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13bfa8: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x13bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x13bfac: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x13bfb0: 0x92430204  lbu         $v1, 0x204($s2)
    ctx->pc = 0x13bfb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 516)));
label_13bfb4:
    // 0x13bfb4: 0x28620078  slti        $v0, $v1, 0x78
    ctx->pc = 0x13bfb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x13bfb8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BFB8u;
    {
        const bool branch_taken_0x13bfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfb8) {
            ctx->pc = 0x13BFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFB8u;
            // 0x13bfbc: 0x2862008c  slti        $v0, $v1, 0x8C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)140) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BFD0u;
            goto label_13bfd0;
        }
    }
    ctx->pc = 0x13BFC0u;
    // 0x13bfc0: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x13bfc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x13bfc4: 0x54200014  bnel        $at, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x13BFC4u;
    {
        const bool branch_taken_0x13bfc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfc4) {
            ctx->pc = 0x13BFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFC4u;
            // 0x13bfc8: 0x8e22023c  lw          $v0, 0x23C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C018u;
            goto label_13c018;
        }
    }
    ctx->pc = 0x13BFCCu;
    // 0x13bfcc: 0x2862008c  slti        $v0, $v1, 0x8C
    ctx->pc = 0x13bfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)140) ? 1 : 0);
label_13bfd0:
    // 0x13bfd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BFD0u;
    {
        const bool branch_taken_0x13bfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfd0) {
            ctx->pc = 0x13BFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFD0u;
            // 0x13bfd4: 0x286200b0  slti        $v0, $v1, 0xB0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)176) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BFE8u;
            goto label_13bfe8;
        }
    }
    ctx->pc = 0x13BFD8u;
    // 0x13bfd8: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x13bfd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x13bfdc: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13BFDCu;
    {
        const bool branch_taken_0x13bfdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfdc) {
            ctx->pc = 0x13C014u;
            goto label_13c014;
        }
    }
    ctx->pc = 0x13BFE4u;
    // 0x13bfe4: 0x286200b0  slti        $v0, $v1, 0xB0
    ctx->pc = 0x13bfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)176) ? 1 : 0);
label_13bfe8:
    // 0x13bfe8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BFE8u;
    {
        const bool branch_taken_0x13bfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfe8) {
            ctx->pc = 0x13BFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFE8u;
            // 0x13bfec: 0x286200d8  slti        $v0, $v1, 0xD8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)216) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C000u;
            goto label_13c000;
        }
    }
    ctx->pc = 0x13BFF0u;
    // 0x13bff0: 0x286100b6  slti        $at, $v1, 0xB6
    ctx->pc = 0x13bff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)182) ? 1 : 0);
    // 0x13bff4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BFF4u;
    {
        const bool branch_taken_0x13bff4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bff4) {
            ctx->pc = 0x13C014u;
            goto label_13c014;
        }
    }
    ctx->pc = 0x13BFFCu;
    // 0x13bffc: 0x286200d8  slti        $v0, $v1, 0xD8
    ctx->pc = 0x13bffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)216) ? 1 : 0);
label_13c000:
    // 0x13c000: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C000u;
    {
        const bool branch_taken_0x13c000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c000) {
            ctx->pc = 0x13C004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C000u;
            // 0x13c004: 0x8e23023c  lw          $v1, 0x23C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C028u;
            goto label_13c028;
        }
    }
    ctx->pc = 0x13C008u;
    // 0x13c008: 0x286100de  slti        $at, $v1, 0xDE
    ctx->pc = 0x13c008u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)222) ? 1 : 0);
    // 0x13c00c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C00Cu;
    {
        const bool branch_taken_0x13c00c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c00c) {
            ctx->pc = 0x13C024u;
            goto label_13c024;
        }
    }
    ctx->pc = 0x13C014u;
label_13c014:
    // 0x13c014: 0x8e22023c  lw          $v0, 0x23C($s1)
    ctx->pc = 0x13c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13c018:
    // 0x13c018: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x13c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x13c01c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C01Cu;
    {
        const bool branch_taken_0x13c01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C01Cu;
            // 0x13c020: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c01c) {
            ctx->pc = 0x13C034u;
            goto label_13c034;
        }
    }
    ctx->pc = 0x13C024u;
label_13c024:
    // 0x13c024: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x13c024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13c028:
    // 0x13c028: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x13c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x13c02c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c030: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13c030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
label_13c034:
    // 0x13c034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c038: 0xc060d5c  jal         func_183570
    ctx->pc = 0x13C038u;
    SET_GPR_U32(ctx, 31, 0x13C040u);
    ctx->pc = 0x13C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C038u;
            // 0x13c03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183570u;
    if (runtime->hasFunction(0x183570u)) {
        auto targetFn = runtime->lookupFunction(0x183570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C040u; }
        if (ctx->pc != 0x13C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183570_0x183570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C040u; }
        if (ctx->pc != 0x13C040u) { return; }
    }
    ctx->pc = 0x13C040u;
label_13c040:
    // 0x13c040: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x13C040u;
    {
        const bool branch_taken_0x13c040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c040) {
            ctx->pc = 0x13C044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C040u;
            // 0x13c044: 0x8e25023c  lw          $a1, 0x23C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C0B0u;
            goto label_13c0b0;
        }
    }
    ctx->pc = 0x13C048u;
    // 0x13c048: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x13c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x13c04c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13c04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x13c050: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x13C050u;
    {
        const bool branch_taken_0x13c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c050) {
            ctx->pc = 0x13C054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C050u;
            // 0x13c054: 0x8e220494  lw          $v0, 0x494($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C0D8u;
            goto label_13c0d8;
        }
    }
    ctx->pc = 0x13C058u;
    // 0x13c058: 0x8e24023c  lw          $a0, 0x23C($s1)
    ctx->pc = 0x13c058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13c05c: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x13c05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x13c060: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C060u;
    {
        const bool branch_taken_0x13c060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C060u;
            // 0x13c064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c060) {
            ctx->pc = 0x13C080u;
            goto label_13c080;
        }
    }
    ctx->pc = 0x13C068u;
    // 0x13c068: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x13c068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x13c06c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c070: 0xc04f11c  jal         func_13C470
    ctx->pc = 0x13C070u;
    SET_GPR_U32(ctx, 31, 0x13C078u);
    ctx->pc = 0x13C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C070u;
            // 0x13c074: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C470u;
    if (runtime->hasFunction(0x13C470u)) {
        auto targetFn = runtime->lookupFunction(0x13C470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C078u; }
        if (ctx->pc != 0x13C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C470_0x13c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C078u; }
        if (ctx->pc != 0x13C078u) { return; }
    }
    ctx->pc = 0x13C078u;
label_13c078:
    // 0x13c078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13C078u;
    {
        const bool branch_taken_0x13c078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c078) {
            ctx->pc = 0x13C098u;
            goto label_13c098;
        }
    }
    ctx->pc = 0x13C080u;
label_13c080:
    // 0x13c080: 0x8e430498  lw          $v1, 0x498($s2)
    ctx->pc = 0x13c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x13c084: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x13c084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13c088: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C088u;
    {
        const bool branch_taken_0x13c088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c088) {
            ctx->pc = 0x13C098u;
            goto label_13c098;
        }
    }
    ctx->pc = 0x13C090u;
    // 0x13c090: 0xc04f134  jal         func_13C4D0
    ctx->pc = 0x13C090u;
    SET_GPR_U32(ctx, 31, 0x13C098u);
    ctx->pc = 0x13C094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C090u;
            // 0x13c094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C4D0u;
    if (runtime->hasFunction(0x13C4D0u)) {
        auto targetFn = runtime->lookupFunction(0x13C4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C098u; }
        if (ctx->pc != 0x13C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C4D0_0x13c4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C098u; }
        if (ctx->pc != 0x13C098u) { return; }
    }
    ctx->pc = 0x13C098u;
label_13c098:
    // 0x13c098: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13C098u;
    {
        const bool branch_taken_0x13c098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c098) {
            ctx->pc = 0x13C0D4u;
            goto label_13c0d4;
        }
    }
    ctx->pc = 0x13C0A0u;
    // 0x13c0a0: 0xc04f508  jal         func_13D420
    ctx->pc = 0x13C0A0u;
    SET_GPR_U32(ctx, 31, 0x13C0A8u);
    ctx->pc = 0x13C0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C0A0u;
            // 0x13c0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D420u;
    if (runtime->hasFunction(0x13D420u)) {
        auto targetFn = runtime->lookupFunction(0x13D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C0A8u; }
        if (ctx->pc != 0x13C0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D420_0x13d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C0A8u; }
        if (ctx->pc != 0x13C0A8u) { return; }
    }
    ctx->pc = 0x13C0A8u;
label_13c0a8:
    // 0x13c0a8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x13C0A8u;
    {
        const bool branch_taken_0x13c0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C0A8u;
            // 0x13c0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0a8) {
            ctx->pc = 0x13C1B0u;
            goto label_13c1b0;
        }
    }
    ctx->pc = 0x13C0B0u;
label_13c0b0:
    // 0x13c0b0: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x13c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x13c0b4: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x13c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x13c0b8: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x13c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x13c0bc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13c0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13c0c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13c0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13c0c4: 0xae24023c  sw          $a0, 0x23C($s1)
    ctx->pc = 0x13c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 4));
    // 0x13c0c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c0cc: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x13c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x13c0d0: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
label_13c0d4:
    // 0x13c0d4: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x13c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
label_13c0d8:
    // 0x13c0d8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x13c0dc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x13C0DCu;
    {
        const bool branch_taken_0x13c0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c0dc) {
            ctx->pc = 0x13C0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C0DCu;
            // 0x13c0e0: 0x8e24023c  lw          $a0, 0x23C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C13Cu;
            goto label_13c13c;
        }
    }
    ctx->pc = 0x13C0E4u;
    // 0x13c0e4: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x13c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13c0e8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x13c0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13c0ec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13C0ECu;
    {
        const bool branch_taken_0x13c0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c0ec) {
            ctx->pc = 0x13C0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C0ECu;
            // 0x13c0f0: 0x8e22023c  lw          $v0, 0x23C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C11Cu;
            goto label_13c11c;
        }
    }
    ctx->pc = 0x13C0F4u;
    // 0x13c0f4: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x13c0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13c0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c0fc: 0xc04f14c  jal         func_13C530
    ctx->pc = 0x13C0FCu;
    SET_GPR_U32(ctx, 31, 0x13C104u);
    ctx->pc = 0x13C100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C0FCu;
            // 0x13c100: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C530u;
    if (runtime->hasFunction(0x13C530u)) {
        auto targetFn = runtime->lookupFunction(0x13C530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C104u; }
        if (ctx->pc != 0x13C104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C530_0x13c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C104u; }
        if (ctx->pc != 0x13C104u) { return; }
    }
    ctx->pc = 0x13C104u;
label_13c104:
    // 0x13c104: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C104u;
    {
        const bool branch_taken_0x13c104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c104) {
            ctx->pc = 0x13C118u;
            goto label_13c118;
        }
    }
    ctx->pc = 0x13C10Cu;
    // 0x13c10c: 0x8e22023c  lw          $v0, 0x23C($s1)
    ctx->pc = 0x13c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13c110: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x13c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x13c114: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13c114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
label_13c118:
    // 0x13c118: 0x8e22023c  lw          $v0, 0x23C($s1)
    ctx->pc = 0x13c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13c11c:
    // 0x13c11c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x13c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x13c120: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13C120u;
    {
        const bool branch_taken_0x13c120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c120) {
            ctx->pc = 0x13C124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C120u;
            // 0x13c124: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13C128u;
    // 0x13c128: 0xc04f3cc  jal         func_13CF30
    ctx->pc = 0x13C128u;
    SET_GPR_U32(ctx, 31, 0x13C130u);
    ctx->pc = 0x13C12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C128u;
            // 0x13c12c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF30u;
    if (runtime->hasFunction(0x13CF30u)) {
        auto targetFn = runtime->lookupFunction(0x13CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C130u; }
        if (ctx->pc != 0x13C130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF30_0x13cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C130u; }
        if (ctx->pc != 0x13C130u) { return; }
    }
    ctx->pc = 0x13C130u;
label_13c130:
    // 0x13c130: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x13c130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x13c134: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13C134u;
    {
        const bool branch_taken_0x13c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c134) {
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13C13Cu;
label_13c13c:
    // 0x13c13c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x13c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x13c140: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x13c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x13c144: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13c144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13c148: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c14c: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x13c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x13c150: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13c150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
label_13c154:
    // 0x13c154: 0x8e22023c  lw          $v0, 0x23C($s1)
    ctx->pc = 0x13c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13c158: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13c158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x13c15c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C15Cu;
    {
        const bool branch_taken_0x13c15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c15c) {
            ctx->pc = 0x13C160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C15Cu;
            // 0x13c160: 0x8e220494  lw          $v0, 0x494($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C170u;
            goto label_13c170;
        }
    }
    ctx->pc = 0x13C164u;
    // 0x13c164: 0xc04f430  jal         func_13D0C0
    ctx->pc = 0x13C164u;
    SET_GPR_U32(ctx, 31, 0x13C16Cu);
    ctx->pc = 0x13C168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C164u;
            // 0x13c168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0C0u;
    if (runtime->hasFunction(0x13D0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C16Cu; }
        if (ctx->pc != 0x13C16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D0C0_0x13d0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C16Cu; }
        if (ctx->pc != 0x13C16Cu) { return; }
    }
    ctx->pc = 0x13C16Cu;
label_13c16c:
    // 0x13c16c: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x13c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
label_13c170:
    // 0x13c170: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x13c174: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13C174u;
    {
        const bool branch_taken_0x13c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c174) {
            ctx->pc = 0x13C178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C174u;
            // 0x13c178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C1B0u;
            goto label_13c1b0;
        }
    }
    ctx->pc = 0x13C17Cu;
    // 0x13c17c: 0x8e22023c  lw          $v0, 0x23C($s1)
    ctx->pc = 0x13c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13c180: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13c180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x13c184: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13c184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x13c188: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x13c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x13c18c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x13c18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x13c190: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C190u;
    {
        const bool branch_taken_0x13c190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c190) {
            ctx->pc = 0x13C194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C190u;
            // 0x13c194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C1B0u;
            goto label_13c1b0;
        }
    }
    ctx->pc = 0x13C198u;
    // 0x13c198: 0xc04f168  jal         func_13C5A0
    ctx->pc = 0x13C198u;
    SET_GPR_U32(ctx, 31, 0x13C1A0u);
    ctx->pc = 0x13C19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C198u;
            // 0x13c19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C5A0u;
    if (runtime->hasFunction(0x13C5A0u)) {
        auto targetFn = runtime->lookupFunction(0x13C5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1A0u; }
        if (ctx->pc != 0x13C1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C5A0_0x13c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1A0u; }
        if (ctx->pc != 0x13C1A0u) { return; }
    }
    ctx->pc = 0x13C1A0u;
label_13c1a0:
    // 0x13c1a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C1A0u;
    {
        const bool branch_taken_0x13c1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c1a0) {
            ctx->pc = 0x13C1ACu;
            goto label_13c1ac;
        }
    }
    ctx->pc = 0x13C1A8u;
    // 0x13c1a8: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x13c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
label_13c1ac:
    // 0x13c1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c1b0:
    // 0x13c1b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13c1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c1b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13c1b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c1b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13c1b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c1bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c1c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c1c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c1c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C1CCu;
            // 0x13c1d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C1D4u;
    // 0x13c1d4: 0x0  nop
    ctx->pc = 0x13c1d4u;
    // NOP
    // 0x13c1d8: 0x0  nop
    ctx->pc = 0x13c1d8u;
    // NOP
    // 0x13c1dc: 0x0  nop
    ctx->pc = 0x13c1dcu;
    // NOP
    ctx->pc = 0x13c1e0u;
}
