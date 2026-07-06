#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201C98
// Address: 0x201c98 - 0x201d70
void sub_00201C98_0x201c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201C98_0x201c98");
#endif

    switch (ctx->pc) {
        case 0x201cc0u: goto label_201cc0;
        case 0x201ce8u: goto label_201ce8;
        case 0x201d38u: goto label_201d38;
        case 0x201d48u: goto label_201d48;
        default: break;
    }

    ctx->pc = 0x201c98u;

    // 0x201c98: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x201c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201c9c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x201c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201ca0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x201ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201ca4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x201ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x201ca8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x201ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201cac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x201cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x201cb0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x201cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x201cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x201CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201CB4u;
            // 0x201cb8: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201CBCu;
    // 0x201cbc: 0x0  nop
    ctx->pc = 0x201cbcu;
    // NOP
label_201cc0:
    // 0x201cc0: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x201cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x201cc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x201cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201cc8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x201cc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x201ccc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x201cd0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x201cd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x201cd4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x201cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x201cd8: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x201cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x201cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x201CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201CDCu;
            // 0x201ce0: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201CE4u;
    // 0x201ce4: 0x0  nop
    ctx->pc = 0x201ce4u;
    // NOP
label_201ce8:
    // 0x201ce8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x201ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x201cec: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x201cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x201cf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x201cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x201cf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x201cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x201cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201cfc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x201cfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x201d00: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x201d00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x201d04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x201d08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x201d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x201d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201d18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x201d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x201d1c: 0x39043  sra         $s2, $v1, 1
    ctx->pc = 0x201d1cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 1));
    // 0x201d20: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x201d20u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    // 0x201d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d28: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x201d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x201d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x201d30: 0xc08075c  jal         func_201D70
    ctx->pc = 0x201D30u;
    SET_GPR_U32(ctx, 31, 0x201D38u);
    ctx->pc = 0x201D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D30u;
            // 0x201d34: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201D70u;
    if (runtime->hasFunction(0x201D70u)) {
        auto targetFn = runtime->lookupFunction(0x201D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D38u; }
        if (ctx->pc != 0x201D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201D70_0x201d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D38u; }
        if (ctx->pc != 0x201D38u) { return; }
    }
    ctx->pc = 0x201D38u;
label_201d38:
    // 0x201d38: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x201d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x201d3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d40: 0xc08075c  jal         func_201D70
    ctx->pc = 0x201D40u;
    SET_GPR_U32(ctx, 31, 0x201D48u);
    ctx->pc = 0x201D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D40u;
            // 0x201d44: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201D70u;
    if (runtime->hasFunction(0x201D70u)) {
        auto targetFn = runtime->lookupFunction(0x201D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D48u; }
        if (ctx->pc != 0x201D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201D70_0x201d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D48u; }
        if (ctx->pc != 0x201D48u) { return; }
    }
    ctx->pc = 0x201D48u;
label_201d48:
    // 0x201d48: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x201d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x201d4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x201d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201d60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x201d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201d64: 0x808075c  j           func_201D70
    ctx->pc = 0x201D64u;
    ctx->pc = 0x201D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D64u;
            // 0x201d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201D70u;
    if (runtime->hasFunction(0x201D70u)) {
        auto targetFn = runtime->lookupFunction(0x201D70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00201D70_0x201d70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x201D6Cu;
    // 0x201d6c: 0x0  nop
    ctx->pc = 0x201d6cu;
    // NOP
    ctx->pc = 0x201d70u;
}
