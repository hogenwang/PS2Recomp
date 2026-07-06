#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00311EB0
// Address: 0x311eb0 - 0x311f50
void sub_00311EB0_0x311eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311EB0_0x311eb0");
#endif

    switch (ctx->pc) {
        case 0x311f08u: goto label_311f08;
        case 0x311f1cu: goto label_311f1c;
        case 0x311f20u: goto label_311f20;
        case 0x311f44u: goto label_311f44;
        default: break;
    }

    ctx->pc = 0x311eb0u;

    // 0x311eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x311eb4: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x311eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x311eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311ebc: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x311ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x311ec0: 0x7c40d960  sq          $zero, -0x26A0($v0)
    ctx->pc = 0x311ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294957408), GPR_VEC(ctx, 0));
    // 0x311ec4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x311ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x311ec8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x311ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x311ecc: 0x24a5d970  addiu       $a1, $a1, -0x2690
    ctx->pc = 0x311eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957424));
    // 0x311ed0: 0x8c48d948  lw          $t0, -0x26B8($v0)
    ctx->pc = 0x311ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957384)));
    // 0x311ed4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x311ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x311ed8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x311ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311edc: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x311edcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x311ee0: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x311ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x311ee4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x311ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x311ee8: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x311ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x311eec: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x311eecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x311ef0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x311ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x311ef4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x311ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x311ef8: 0xac47d960  sw          $a3, -0x26A0($v0)
    ctx->pc = 0x311ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957408), GPR_U32(ctx, 7));
    // 0x311efc: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x311efcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x311f00: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x311F00u;
    SET_GPR_U32(ctx, 31, 0x311F08u);
    ctx->pc = 0x311F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311F00u;
            // 0x311f04: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F08u; }
        if (ctx->pc != 0x311F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F08u; }
        if (ctx->pc != 0x311F08u) { return; }
    }
    ctx->pc = 0x311F08u;
label_311f08:
    // 0x311f08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x311f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x311f0c: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x311f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x311f10: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x311f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x311f14: 0xc040a04  jal         func_102810
    ctx->pc = 0x311F14u;
    SET_GPR_U32(ctx, 31, 0x311F1Cu);
    ctx->pc = 0x311F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311F14u;
            // 0x311f18: 0x24a5d960  addiu       $a1, $a1, -0x26A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F1Cu; }
        if (ctx->pc != 0x311F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F1Cu; }
        if (ctx->pc != 0x311F1Cu) { return; }
    }
    ctx->pc = 0x311F1Cu;
label_311f1c:
    // 0x311f1c: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x311f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_311f20:
    // 0x311f20: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x311f20u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x311f24: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x311f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x311f28: 0x0  nop
    ctx->pc = 0x311f28u;
    // NOP
    // 0x311f2c: 0x0  nop
    ctx->pc = 0x311f2cu;
    // NOP
    // 0x311f30: 0x0  nop
    ctx->pc = 0x311f30u;
    // NOP
    // 0x311f34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x311F34u;
    {
        const bool branch_taken_0x311f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311f34) {
            ctx->pc = 0x311F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311f20;
        }
    }
    ctx->pc = 0x311F3Cu;
    // 0x311f3c: 0xc0c47a4  jal         func_311E90
    ctx->pc = 0x311F3Cu;
    SET_GPR_U32(ctx, 31, 0x311F44u);
    ctx->pc = 0x311E90u;
    if (runtime->hasFunction(0x311E90u)) {
        auto targetFn = runtime->lookupFunction(0x311E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F44u; }
        if (ctx->pc != 0x311F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311E90_0x311e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F44u; }
        if (ctx->pc != 0x311F44u) { return; }
    }
    ctx->pc = 0x311F44u;
label_311f44:
    // 0x311f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311f48: 0x3e00008  jr          $ra
    ctx->pc = 0x311F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311F48u;
            // 0x311f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311F50u;
    ctx->pc = 0x311f50u;
}
