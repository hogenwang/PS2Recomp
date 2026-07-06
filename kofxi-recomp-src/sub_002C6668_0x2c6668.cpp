#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6668
// Address: 0x2c6668 - 0x2c66b8
void sub_002C6668_0x2c6668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6668_0x2c6668");
#endif

    switch (ctx->pc) {
        case 0x2c669cu: goto label_2c669c;
        default: break;
    }

    ctx->pc = 0x2c6668u;

    // 0x2c6668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c6668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c666c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2c666cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6678: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c667c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2c667cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c6680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c6680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c6684: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2c6684u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c668c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c668cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6690: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x2c6690u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c6694: 0xc0b2184  jal         func_2C8610
    ctx->pc = 0x2C6694u;
    SET_GPR_U32(ctx, 31, 0x2C669Cu);
    ctx->pc = 0x2C6698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6694u;
            // 0x2c6698: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8610u;
    if (runtime->hasFunction(0x2C8610u)) {
        auto targetFn = runtime->lookupFunction(0x2C8610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C669Cu; }
        if (ctx->pc != 0x2C669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8610_0x2c8610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C669Cu; }
        if (ctx->pc != 0x2C669Cu) { return; }
    }
    ctx->pc = 0x2C669Cu;
label_2c669c:
    // 0x2c669c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C669Cu;
    {
        const bool branch_taken_0x2c669c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c669c) {
            ctx->pc = 0x2C66A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C669Cu;
            // 0x2c66a0: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C66A4u;
            goto label_2c66a4;
        }
    }
    ctx->pc = 0x2C66A4u;
label_2c66a4:
    // 0x2c66a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c66a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c66a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c66a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c66ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c66acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c66b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C66B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C66B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66B0u;
            // 0x2c66b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C66B8u;
    ctx->pc = 0x2c66b8u;
}
