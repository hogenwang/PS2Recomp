#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FBE58
// Address: 0x1fbe58 - 0x1fbef0
void sub_001FBE58_0x1fbe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBE58_0x1fbe58");
#endif

    switch (ctx->pc) {
        case 0x1fbe78u: goto label_1fbe78;
        case 0x1fbe9cu: goto label_1fbe9c;
        case 0x1fbed0u: goto label_1fbed0;
        default: break;
    }

    ctx->pc = 0x1fbe58u;

    // 0x1fbe58: 0x24840d88  addiu       $a0, $a0, 0xD88
    ctx->pc = 0x1fbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1fbe5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fbe5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe60: 0x8c83028c  lw          $v1, 0x28C($a0)
    ctx->pc = 0x1fbe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 652)));
    // 0x1fbe64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1fbe64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1fbe68: 0x8c850290  lw          $a1, 0x290($a0)
    ctx->pc = 0x1fbe68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x1fbe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE6Cu;
            // 0x1fbe70: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBE74u;
    // 0x1fbe74: 0x0  nop
    ctx->pc = 0x1fbe74u;
    // NOP
label_1fbe78:
    // 0x1fbe78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbe7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbe80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fbe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fbe88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fbe88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fbe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fbe90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fbe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fbe94: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FBE94u;
    SET_GPR_U32(ctx, 31, 0x1FBE9Cu);
    ctx->pc = 0x1FBE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE94u;
            // 0x1fbe98: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE9Cu; }
        if (ctx->pc != 0x1FBE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE9Cu; }
        if (ctx->pc != 0x1FBE9Cu) { return; }
    }
    ctx->pc = 0x1FBE9Cu;
label_1fbe9c:
    // 0x1fbe9c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fbe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fbea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fbea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbea4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fbea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbea8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBEA8u;
    {
        const bool branch_taken_0x1fbea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBEA8u;
            // 0x1fbeac: 0x34a50128  ori         $a1, $a1, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)296);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbea8) {
            ctx->pc = 0x1FBED0u;
            goto label_1fbed0;
        }
    }
    ctx->pc = 0x1FBEB0u;
    // 0x1fbeb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbeb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fbeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbeb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbec0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fbec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbec4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FBEC4u;
    ctx->pc = 0x1FBEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBEC4u;
            // 0x1fbec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FBECCu;
    // 0x1fbecc: 0x0  nop
    ctx->pc = 0x1fbeccu;
    // NOP
label_1fbed0:
    // 0x1fbed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fbed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbed4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbedc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbedcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbee0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fbee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbee4: 0x807efbc  j           func_1FBEF0
    ctx->pc = 0x1FBEE4u;
    ctx->pc = 0x1FBEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBEE4u;
            // 0x1fbee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEF0u;
    if (runtime->hasFunction(0x1FBEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1FBEF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FBEF0_0x1fbef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FBEECu;
    // 0x1fbeec: 0x0  nop
    ctx->pc = 0x1fbeecu;
    // NOP
    ctx->pc = 0x1fbef0u;
}
