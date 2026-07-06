#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030BC40
// Address: 0x30bc40 - 0x30bcc0
void sub_0030BC40_0x30bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BC40_0x30bc40");
#endif

    switch (ctx->pc) {
        case 0x30bc7cu: goto label_30bc7c;
        case 0x30bc90u: goto label_30bc90;
        case 0x30bca4u: goto label_30bca4;
        default: break;
    }

    ctx->pc = 0x30bc40u;

label_30bc40:
    // 0x30bc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30bc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30bc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bc50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30bc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc54: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x30bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x30bc58: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BC58u;
    {
        const bool branch_taken_0x30bc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC58u;
            // 0x30bc5c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc58) {
            ctx->pc = 0x30BC7Cu;
            goto label_30bc7c;
        }
    }
    ctx->pc = 0x30BC60u;
    // 0x30bc60: 0x8c66004c  lw          $a2, 0x4C($v1)
    ctx->pc = 0x30bc60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x30bc64: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BC64u;
    {
        const bool branch_taken_0x30bc64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bc64) {
            ctx->pc = 0x30BC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC64u;
            // 0x30bc68: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BC80u;
            goto label_30bc80;
        }
    }
    ctx->pc = 0x30BC6Cu;
    // 0x30bc6c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x30bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x30bc70: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x30bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30bc74: 0xc0c2ee4  jal         func_30BB90
    ctx->pc = 0x30BC74u;
    SET_GPR_U32(ctx, 31, 0x30BC7Cu);
    ctx->pc = 0x30BC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC74u;
            // 0x30bc78: 0x8c650050  lw          $a1, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BB90u;
    if (runtime->hasFunction(0x30BB90u)) {
        auto targetFn = runtime->lookupFunction(0x30BB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC7Cu; }
        if (ctx->pc != 0x30BC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BB90_0x30bb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC7Cu; }
        if (ctx->pc != 0x30BC7Cu) { return; }
    }
    ctx->pc = 0x30BC7Cu;
label_30bc7c:
    // 0x30bc7c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x30bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30bc80:
    // 0x30bc80: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BC80u;
    {
        const bool branch_taken_0x30bc80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bc80) {
            ctx->pc = 0x30BC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC80u;
            // 0x30bc84: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BC94u;
            goto label_30bc94;
        }
    }
    ctx->pc = 0x30BC88u;
    // 0x30bc88: 0xc0c2f10  jal         func_30BC40
    ctx->pc = 0x30BC88u;
    SET_GPR_U32(ctx, 31, 0x30BC90u);
    ctx->pc = 0x30BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC88u;
            // 0x30bc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BC40u;
    goto label_30bc40;
    ctx->pc = 0x30BC90u;
label_30bc90:
    // 0x30bc90: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_30bc94:
    // 0x30bc94: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BC94u;
    {
        const bool branch_taken_0x30bc94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bc94) {
            ctx->pc = 0x30BC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC94u;
            // 0x30bc98: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BCA8u;
            goto label_30bca8;
        }
    }
    ctx->pc = 0x30BC9Cu;
    // 0x30bc9c: 0xc0c2f10  jal         func_30BC40
    ctx->pc = 0x30BC9Cu;
    SET_GPR_U32(ctx, 31, 0x30BCA4u);
    ctx->pc = 0x30BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC9Cu;
            // 0x30bca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BC40u;
    goto label_30bc40;
    ctx->pc = 0x30BCA4u;
label_30bca4:
    // 0x30bca4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30bca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30bca8:
    // 0x30bca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bcac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bcacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x30BCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BCB0u;
            // 0x30bcb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BCB8u;
    // 0x30bcb8: 0x0  nop
    ctx->pc = 0x30bcb8u;
    // NOP
    // 0x30bcbc: 0x0  nop
    ctx->pc = 0x30bcbcu;
    // NOP
    ctx->pc = 0x30bcc0u;
}
