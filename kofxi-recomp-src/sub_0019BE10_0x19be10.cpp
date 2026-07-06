#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BE10
// Address: 0x19be10 - 0x19bf50
void sub_0019BE10_0x19be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BE10_0x19be10");
#endif

    switch (ctx->pc) {
        case 0x19be48u: goto label_19be48;
        case 0x19be70u: goto label_19be70;
        case 0x19beb0u: goto label_19beb0;
        case 0x19bedcu: goto label_19bedc;
        case 0x19bee8u: goto label_19bee8;
        case 0x19bf30u: goto label_19bf30;
        default: break;
    }

    ctx->pc = 0x19be10u;

    // 0x19be10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19be14: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x19be14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x19be18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19be1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19be20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19be24: 0x24a5ef48  addiu       $a1, $a1, -0x10B8
    ctx->pc = 0x19be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
    // 0x19be28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19be28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be2c: 0xa040d4f8  sb          $zero, -0x2B08($v0)
    ctx->pc = 0x19be2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956280), (uint8_t)GPR_U32(ctx, 0));
    // 0x19be30: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19be30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x19be34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x19be34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19be38: 0x2484be70  addiu       $a0, $a0, -0x4190
    ctx->pc = 0x19be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950512));
    // 0x19be3c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x19be3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19be40: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x19BE40u;
    SET_GPR_U32(ctx, 31, 0x19BE48u);
    ctx->pc = 0x19BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE40u;
            // 0x19be44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE48u; }
        if (ctx->pc != 0x19BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE48u; }
        if (ctx->pc != 0x19BE48u) { return; }
    }
    ctx->pc = 0x19BE48u;
label_19be48:
    // 0x19be48: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x19be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19be4c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x19be4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19be50: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19be50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19be54: 0xa0700002  sb          $s0, 0x2($v1)
    ctx->pc = 0x19be54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x19be58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19be58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19be5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be60: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE60u;
            // 0x19be64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BE68u;
    // 0x19be68: 0x0  nop
    ctx->pc = 0x19be68u;
    // NOP
    // 0x19be6c: 0x0  nop
    ctx->pc = 0x19be6cu;
    // NOP
label_19be70:
    // 0x19be70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19be74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19be78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19be78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19be7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19be80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19be80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19be84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19be84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be88: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x19be88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19be8c: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x19be8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x19be90: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19BE90u;
    {
        const bool branch_taken_0x19be90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19be90) {
            ctx->pc = 0x19BE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE90u;
            // 0x19be94: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19BED4u;
            goto label_19bed4;
        }
    }
    ctx->pc = 0x19BE98u;
    // 0x19be98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BE98u;
    {
        const bool branch_taken_0x19be98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be98) {
            ctx->pc = 0x19BEA8u;
            goto label_19bea8;
        }
    }
    ctx->pc = 0x19BEA0u;
    // 0x19bea0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x19BEA0u;
    {
        const bool branch_taken_0x19bea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEA0u;
            // 0x19bea4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bea0) {
            ctx->pc = 0x19BF34u;
            goto label_19bf34;
        }
    }
    ctx->pc = 0x19BEA8u;
label_19bea8:
    // 0x19bea8: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19BEA8u;
    SET_GPR_U32(ctx, 31, 0x19BEB0u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEB0u; }
        if (ctx->pc != 0x19BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEB0u; }
        if (ctx->pc != 0x19BEB0u) { return; }
    }
    ctx->pc = 0x19BEB0u;
label_19beb0:
    // 0x19beb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19beb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19beb8: 0xa040d570  sb          $zero, -0x2A90($v0)
    ctx->pc = 0x19beb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956400), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bebc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bec0: 0xac60d4d8  sw          $zero, -0x2B28($v1)
    ctx->pc = 0x19bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956248), GPR_U32(ctx, 0));
    // 0x19bec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bec8: 0xac40d4e0  sw          $zero, -0x2B20($v0)
    ctx->pc = 0x19bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 0));
    // 0x19becc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x19beccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19bed0: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x19bed0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_19bed4:
    // 0x19bed4: 0xc067100  jal         func_19C400
    ctx->pc = 0x19BED4u;
    SET_GPR_U32(ctx, 31, 0x19BEDCu);
    ctx->pc = 0x19C400u;
    if (runtime->hasFunction(0x19C400u)) {
        auto targetFn = runtime->lookupFunction(0x19C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEDCu; }
        if (ctx->pc != 0x19BEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C400_0x19c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEDCu; }
        if (ctx->pc != 0x19BEDCu) { return; }
    }
    ctx->pc = 0x19BEDCu;
label_19bedc:
    // 0x19bedc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bee0: 0xc066fd4  jal         func_19BF50
    ctx->pc = 0x19BEE0u;
    SET_GPR_U32(ctx, 31, 0x19BEE8u);
    ctx->pc = 0x19BEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEE0u;
            // 0x19bee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF50u;
    if (runtime->hasFunction(0x19BF50u)) {
        auto targetFn = runtime->lookupFunction(0x19BF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEE8u; }
        if (ctx->pc != 0x19BEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BF50_0x19bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEE8u; }
        if (ctx->pc != 0x19BEE8u) { return; }
    }
    ctx->pc = 0x19BEE8u;
label_19bee8:
    // 0x19bee8: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x19bee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19beec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19beecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bef0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x19bef0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x19bef4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19bef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bef8: 0x1488000d  bne         $a0, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x19BEF8u;
    {
        const bool branch_taken_0x19bef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x19BEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEF8u;
            // 0x19befc: 0xa062d570  sb          $v0, -0x2A90($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294956400), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bef8) {
            ctx->pc = 0x19BF30u;
            goto label_19bf30;
        }
    }
    ctx->pc = 0x19BF00u;
    // 0x19bf00: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bf04: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x19bf04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x19bf08: 0x8c47d4d8  lw          $a3, -0x2B28($v0)
    ctx->pc = 0x19bf08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956248)));
    // 0x19bf0c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19bf10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bf14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19bf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bf1c: 0xacc7d510  sw          $a3, -0x2AF0($a2)
    ctx->pc = 0x19bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956304), GPR_U32(ctx, 7));
    // 0x19bf20: 0xa048d4f8  sb          $t0, -0x2B08($v0)
    ctx->pc = 0x19bf20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956280), (uint8_t)GPR_U32(ctx, 8));
    // 0x19bf24: 0xac67d514  sw          $a3, -0x2AEC($v1)
    ctx->pc = 0x19bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956308), GPR_U32(ctx, 7));
    // 0x19bf28: 0xc055728  jal         func_155CA0
    ctx->pc = 0x19BF28u;
    SET_GPR_U32(ctx, 31, 0x19BF30u);
    ctx->pc = 0x19BF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF28u;
            // 0x19bf2c: 0xaca0d4d8  sw          $zero, -0x2B28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294956248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF30u; }
        if (ctx->pc != 0x19BF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF30u; }
        if (ctx->pc != 0x19BF30u) { return; }
    }
    ctx->pc = 0x19BF30u;
label_19bf30:
    // 0x19bf30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19bf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19bf34:
    // 0x19bf34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bf38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19bf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF3Cu;
            // 0x19bf40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BF44u;
    // 0x19bf44: 0x0  nop
    ctx->pc = 0x19bf44u;
    // NOP
    // 0x19bf48: 0x0  nop
    ctx->pc = 0x19bf48u;
    // NOP
    // 0x19bf4c: 0x0  nop
    ctx->pc = 0x19bf4cu;
    // NOP
    ctx->pc = 0x19bf50u;
}
