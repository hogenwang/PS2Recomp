#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013B1F0
// Address: 0x13b1f0 - 0x13b290
void sub_0013B1F0_0x13b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B1F0_0x13b1f0");
#endif

    switch (ctx->pc) {
        case 0x13b210u: goto label_13b210;
        case 0x13b218u: goto label_13b218;
        default: break;
    }

    ctx->pc = 0x13b1f0u;

    // 0x13b1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13b1f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13b1f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b1fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b200: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b208: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13b208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b20c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13b20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b210:
    // 0x13b210: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x13B210u;
    SET_GPR_U32(ctx, 31, 0x13B218u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B218u; }
        if (ctx->pc != 0x13B218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B218u; }
        if (ctx->pc != 0x13B218u) { return; }
    }
    ctx->pc = 0x13B218u;
label_13b218:
    // 0x13b218: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B218u;
    {
        const bool branch_taken_0x13b218 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B218u;
            // 0x13b21c: 0x51001a  div         $zero, $v0, $s1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b218) {
            ctx->pc = 0x13B224u;
            goto label_13b224;
        }
    }
    ctx->pc = 0x13B220u;
    // 0x13b220: 0x1cd  break       0, 7
    ctx->pc = 0x13b220u;
    runtime->handleBreak(rdram, ctx);
label_13b224:
    // 0x13b224: 0x2010  mfhi        $a0
    ctx->pc = 0x13b224u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x13b228: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x13b228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13b22c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B22Cu;
    {
        const bool branch_taken_0x13b22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13b22c) {
            ctx->pc = 0x13B250u;
            goto label_13b250;
        }
    }
    ctx->pc = 0x13B234u;
    // 0x13b234: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13b238: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x13b238u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b23c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13b23cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b240: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x13b240u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13B244u;
    {
        const bool branch_taken_0x13b244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B244u;
            // 0x13b248: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b244) {
            ctx->pc = 0x13B268u;
            goto label_13b268;
        }
    }
    ctx->pc = 0x13B24Cu;
    // 0x13b24c: 0x0  nop
    ctx->pc = 0x13b24cu;
    // NOP
label_13b250:
    // 0x13b250: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x13b250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13b254: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x13b254u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x13b258: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13b258u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b25c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x13b25cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b260: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x13b260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13b264: 0x0  nop
    ctx->pc = 0x13b264u;
    // NOP
label_13b268:
    // 0x13b268: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13b268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13b26c: 0x2a032710  slti        $v1, $s0, 0x2710
    ctx->pc = 0x13b26cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x13b270: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13B270u;
    {
        const bool branch_taken_0x13b270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b270) {
            ctx->pc = 0x13B210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b210;
        }
    }
    ctx->pc = 0x13B278u;
    // 0x13b278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13b278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b27c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b27cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b288: 0x3e00008  jr          $ra
    ctx->pc = 0x13B288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B288u;
            // 0x13b28c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B290u;
    ctx->pc = 0x13b290u;
}
