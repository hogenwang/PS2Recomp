#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204BE0
// Address: 0x204be0 - 0x204d20
void sub_00204BE0_0x204be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204BE0_0x204be0");
#endif

    switch (ctx->pc) {
        case 0x204c40u: goto label_204c40;
        case 0x204c44u: goto label_204c44;
        case 0x204cd4u: goto label_204cd4;
        case 0x204cf0u: goto label_204cf0;
        case 0x204d04u: goto label_204d04;
        default: break;
    }

    ctx->pc = 0x204be0u;

    // 0x204be0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x204be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x204be4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x204be8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x204be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x204bec: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x204bf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x204bf4: 0x246398a0  addiu       $v1, $v1, -0x6760
    ctx->pc = 0x204bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940832));
    // 0x204bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x204bfc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x204bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204c04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x204c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c0c: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x204c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204c10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x204c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204c14: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204c18: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x204c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x204c1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204c20: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x204c20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204c24: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x204c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x204c28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204c2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x204c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x204c30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204c34: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x204c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204c38: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x204C38u;
    SET_GPR_U32(ctx, 31, 0x204C40u);
    ctx->pc = 0x204C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204C38u;
            // 0x204c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C40u; }
        if (ctx->pc != 0x204C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C40u; }
        if (ctx->pc != 0x204C40u) { return; }
    }
    ctx->pc = 0x204C40u;
label_204c40:
    // 0x204c40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x204c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204c44:
    // 0x204c44: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x204C44u;
    {
        const bool branch_taken_0x204c44 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x204C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C44u;
            // 0x204c48: 0x122043  sra         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c44) {
            ctx->pc = 0x204C54u;
            goto label_204c54;
        }
    }
    ctx->pc = 0x204C4Cu;
    // 0x204c4c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x204c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x204c50: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x204c50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_204c54:
    // 0x204c54: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x204c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x204c58: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x204c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x204c5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204c60: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x204c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x204c64: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x204C64u;
    {
        const bool branch_taken_0x204c64 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x204C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C64u;
            // 0x204c68: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c64) {
            ctx->pc = 0x204C78u;
            goto label_204c78;
        }
    }
    ctx->pc = 0x204C6Cu;
    // 0x204c6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x204C6Cu;
    {
        const bool branch_taken_0x204c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204c6c) {
            ctx->pc = 0x204C78u;
            goto label_204c78;
        }
    }
    ctx->pc = 0x204C74u;
    // 0x204c74: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x204c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_204c78:
    // 0x204c78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x204C78u;
    {
        const bool branch_taken_0x204c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204c78) {
            ctx->pc = 0x204C84u;
            goto label_204c84;
        }
    }
    ctx->pc = 0x204C80u;
    // 0x204c80: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x204c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_204c84:
    // 0x204c84: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x204c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x204c88: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x204c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x204c8c: 0x8c44da70  lw          $a0, -0x2590($v0)
    ctx->pc = 0x204c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x204c90: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x204c90u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x204c94: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x204c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x204c98: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x204c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x204c9c: 0x2010  mfhi        $a0
    ctx->pc = 0x204c9cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x204ca0: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x204ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x204ca4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x204ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204ca8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x204ca8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x204cac: 0x1010  mfhi        $v0
    ctx->pc = 0x204cacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x204cb0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x204cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x204cb4: 0x2c410089  sltiu       $at, $v0, 0x89
    ctx->pc = 0x204cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)137) ? 1 : 0);
    // 0x204cb8: 0x5420000e  bnel        $at, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x204CB8u;
    {
        const bool branch_taken_0x204cb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x204cb8) {
            ctx->pc = 0x204CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204CB8u;
            // 0x204cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204CF4u;
            goto label_204cf4;
        }
    }
    ctx->pc = 0x204CC0u;
    // 0x204cc0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204cc4: 0x2624ffec  addiu       $a0, $s1, -0x14
    ctx->pc = 0x204cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x204cc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x204cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ccc: 0xc081120  jal         func_204480
    ctx->pc = 0x204CCCu;
    SET_GPR_U32(ctx, 31, 0x204CD4u);
    ctx->pc = 0x204CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204CCCu;
            // 0x204cd0: 0x24c6a13c  addiu       $a2, $a2, -0x5EC4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943036));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CD4u; }
        if (ctx->pc != 0x204CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CD4u; }
        if (ctx->pc != 0x204CD4u) { return; }
    }
    ctx->pc = 0x204CD4u;
label_204cd4:
    // 0x204cd4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x204cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x204cd8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204cdc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x204cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x204ce0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x204ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ce4: 0x24c6a148  addiu       $a2, $a2, -0x5EB8
    ctx->pc = 0x204ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943048));
    // 0x204ce8: 0xc081120  jal         func_204480
    ctx->pc = 0x204CE8u;
    SET_GPR_U32(ctx, 31, 0x204CF0u);
    ctx->pc = 0x204CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204CE8u;
            // 0x204cec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CF0u; }
        if (ctx->pc != 0x204CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CF0u; }
        if (ctx->pc != 0x204CF0u) { return; }
    }
    ctx->pc = 0x204CF0u;
label_204cf0:
    // 0x204cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204cf4:
    // 0x204cf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x204cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x204cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cfc: 0xc081270  jal         func_2049C0
    ctx->pc = 0x204CFCu;
    SET_GPR_U32(ctx, 31, 0x204D04u);
    ctx->pc = 0x204D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204CFCu;
            // 0x204d00: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2049C0u;
    if (runtime->hasFunction(0x2049C0u)) {
        auto targetFn = runtime->lookupFunction(0x2049C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D04u; }
        if (ctx->pc != 0x204D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002049C0_0x2049c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D04u; }
        if (ctx->pc != 0x204D04u) { return; }
    }
    ctx->pc = 0x204D04u;
label_204d04:
    // 0x204d04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x204d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204d08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204d08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204d0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d18: 0x3e00008  jr          $ra
    ctx->pc = 0x204D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D18u;
            // 0x204d1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204D20u;
    ctx->pc = 0x204d20u;
}
