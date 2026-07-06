#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB6A8
// Address: 0x2ab6a8 - 0x2ab720
void sub_002AB6A8_0x2ab6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB6A8_0x2ab6a8");
#endif

    switch (ctx->pc) {
        case 0x2ab6e8u: goto label_2ab6e8;
        case 0x2ab70cu: goto label_2ab70c;
        default: break;
    }

    ctx->pc = 0x2ab6a8u;

    // 0x2ab6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab6ac: 0x24031040  addiu       $v1, $zero, 0x1040
    ctx->pc = 0x2ab6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    // 0x2ab6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab6b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6bc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2ab6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ab6c0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AB6C0u;
    {
        const bool branch_taken_0x2ab6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AB6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB6C0u;
            // 0x2ab6c4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab6c0) {
            ctx->pc = 0x2AB704u;
            goto label_2ab704;
        }
    }
    ctx->pc = 0x2AB6C8u;
    // 0x2ab6c8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2ab6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2ab6cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ab6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab6d0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2ab6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ab6d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ab6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ab6d8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2ab6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ab6dc: 0x8ca60090  lw          $a2, 0x90($a1)
    ctx->pc = 0x2ab6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x2ab6e0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2AB6E0u;
    SET_GPR_U32(ctx, 31, 0x2AB6E8u);
    ctx->pc = 0x2AB6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB6E0u;
            // 0x2ab6e4: 0x24a50094  addiu       $a1, $a1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB6E8u; }
        if (ctx->pc != 0x2AB6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB6E8u; }
        if (ctx->pc != 0x2AB6E8u) { return; }
    }
    ctx->pc = 0x2AB6E8u;
label_2ab6e8:
    // 0x2ab6e8: 0x24031041  addiu       $v1, $zero, 0x1041
    ctx->pc = 0x2ab6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4161));
    // 0x2ab6ec: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2ab6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ab6f0: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2ab6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2ab6f4: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x2ab6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2ab6f8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2ab6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2ab6fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ab6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ab700: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2ab700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2ab704:
    // 0x2ab704: 0xc0acbb2  jal         func_2B2EC8
    ctx->pc = 0x2AB704u;
    SET_GPR_U32(ctx, 31, 0x2AB70Cu);
    ctx->pc = 0x2AB708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB704u;
            // 0x2ab708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2EC8u;
    if (runtime->hasFunction(0x2B2EC8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB70Cu; }
        if (ctx->pc != 0x2AB70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2EC8_0x2b2ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB70Cu; }
        if (ctx->pc != 0x2AB70Cu) { return; }
    }
    ctx->pc = 0x2AB70Cu;
label_2ab70c:
    // 0x2ab70c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab714: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB714u;
            // 0x2ab718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB71Cu;
    // 0x2ab71c: 0x0  nop
    ctx->pc = 0x2ab71cu;
    // NOP
    ctx->pc = 0x2ab720u;
}
