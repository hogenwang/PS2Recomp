#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6BE8
// Address: 0x1e6be8 - 0x1e6c80
void sub_001E6BE8_0x1e6be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6BE8_0x1e6be8");
#endif

    switch (ctx->pc) {
        case 0x1e6c50u: goto label_1e6c50;
        case 0x1e6c60u: goto label_1e6c60;
        case 0x1e6c68u: goto label_1e6c68;
        default: break;
    }

    ctx->pc = 0x1e6be8u;

    // 0x1e6be8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e6be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e6bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e6bf0: 0x3c1001c0  lui         $s0, 0x1C0
    ctx->pc = 0x1e6bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)448 << 16));
    // 0x1e6bf4: 0x26103b80  addiu       $s0, $s0, 0x3B80
    ctx->pc = 0x1e6bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15232));
    // 0x1e6bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e6bfc: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1e6bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1e6c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c04: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x1e6c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x1e6c08: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1e6c0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6c18: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x1e6c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x1e6c1c: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x1e6c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x1e6c20: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x1e6c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x1e6c24: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x1e6c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x1e6c28: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x1e6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x1e6c2c: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x1e6c2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e6c30: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x1e6c30u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e6c34: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x1e6c34u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e6c38: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x1e6c38u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e6c3c: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x1e6c3cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e6c40: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x1e6c40u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e6c44: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x1e6c44u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e6c48: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1E6C48u;
    SET_GPR_U32(ctx, 31, 0x1E6C50u);
    ctx->pc = 0x1E6C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C48u;
            // 0x1e6c4c: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C50u; }
        if (ctx->pc != 0x1E6C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C50u; }
        if (ctx->pc != 0x1E6C50u) { return; }
    }
    ctx->pc = 0x1E6C50u;
label_1e6c50:
    // 0x1e6c50: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1e6c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e6c54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c58: 0xc04b984  jal         func_12E610
    ctx->pc = 0x1E6C58u;
    SET_GPR_U32(ctx, 31, 0x1E6C60u);
    ctx->pc = 0x1E6C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C58u;
            // 0x1e6c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E610u;
    if (runtime->hasFunction(0x12E610u)) {
        auto targetFn = runtime->lookupFunction(0x12E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C60u; }
        if (ctx->pc != 0x1E6C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E610_0x12e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C60u; }
        if (ctx->pc != 0x1E6C60u) { return; }
    }
    ctx->pc = 0x1E6C60u;
label_1e6c60:
    // 0x1e6c60: 0xc079b2c  jal         func_1E6CB0
    ctx->pc = 0x1E6C60u;
    SET_GPR_U32(ctx, 31, 0x1E6C68u);
    ctx->pc = 0x1E6C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C60u;
            // 0x1e6c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6CB0u;
    if (runtime->hasFunction(0x1E6CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E6CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C68u; }
        if (ctx->pc != 0x1E6C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6CB0_0x1e6cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C68u; }
        if (ctx->pc != 0x1E6C68u) { return; }
    }
    ctx->pc = 0x1E6C68u;
label_1e6c68:
    // 0x1e6c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e6c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6c74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C74u;
            // 0x1e6c78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6C7Cu;
    // 0x1e6c7c: 0x0  nop
    ctx->pc = 0x1e6c7cu;
    // NOP
    ctx->pc = 0x1e6c80u;
}
