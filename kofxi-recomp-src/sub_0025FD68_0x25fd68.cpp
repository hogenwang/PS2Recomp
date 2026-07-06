#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025FD68
// Address: 0x25fd68 - 0x25fdc0
void sub_0025FD68_0x25fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FD68_0x25fd68");
#endif

    switch (ctx->pc) {
        case 0x25fd80u: goto label_25fd80;
        default: break;
    }

    ctx->pc = 0x25fd68u;

    // 0x25fd68: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x25fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x25fd6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fd6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fd70: 0x8c44cec0  lw          $a0, -0x3140($v0)
    ctx->pc = 0x25fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954688)));
    // 0x25fd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fd78: 0xc04636c  jal         func_118DB0
    ctx->pc = 0x25FD78u;
    SET_GPR_U32(ctx, 31, 0x25FD80u);
    ctx->pc = 0x118DB0u;
    if (runtime->hasFunction(0x118DB0u)) {
        auto targetFn = runtime->lookupFunction(0x118DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD80u; }
        if (ctx->pc != 0x25FD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118DB0_0x118db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD80u; }
        if (ctx->pc != 0x25FD80u) { return; }
    }
    ctx->pc = 0x25FD80u;
label_25fd80:
    // 0x25fd80: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25fd84: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25fd88: 0x246217c0  addiu       $v0, $v1, 0x17C0
    ctx->pc = 0x25fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6080));
    // 0x25fd8c: 0x24a417b0  addiu       $a0, $a1, 0x17B0
    ctx->pc = 0x25fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
    // 0x25fd90: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x25fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x25fd94: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x25fd94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x25fd98: 0xfc6017c0  sd          $zero, 0x17C0($v1)
    ctx->pc = 0x25fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 6080), GPR_U64(ctx, 0));
    // 0x25fd9c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x25fd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x25fda0: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x25fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x25fda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fda8: 0xfca017b0  sd          $zero, 0x17B0($a1)
    ctx->pc = 0x25fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 6064), GPR_U64(ctx, 0));
    // 0x25fdac: 0xfcc0ceb0  sd          $zero, -0x3150($a2)
    ctx->pc = 0x25fdacu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294954672), GPR_U64(ctx, 0));
    // 0x25fdb0: 0xfce017d0  sd          $zero, 0x17D0($a3)
    ctx->pc = 0x25fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 6096), GPR_U64(ctx, 0));
    // 0x25fdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x25FDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FDB4u;
            // 0x25fdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FDBCu;
    // 0x25fdbc: 0x0  nop
    ctx->pc = 0x25fdbcu;
    // NOP
    ctx->pc = 0x25fdc0u;
}
