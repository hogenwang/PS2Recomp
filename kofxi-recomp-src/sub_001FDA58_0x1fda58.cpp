#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FDA58
// Address: 0x1fda58 - 0x1fdb38
void sub_001FDA58_0x1fda58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDA58_0x1fda58");
#endif

    switch (ctx->pc) {
        case 0x1fda74u: goto label_1fda74;
        case 0x1fda98u: goto label_1fda98;
        default: break;
    }

    ctx->pc = 0x1fda58u;

    // 0x1fda58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fda58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fda5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fda5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda60: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1fda60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1fda64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fda64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fda68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fda68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fda6c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1FDA6Cu;
    SET_GPR_U32(ctx, 31, 0x1FDA74u);
    ctx->pc = 0x1FDA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA6Cu;
            // 0x1fda70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA74u; }
        if (ctx->pc != 0x1FDA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA74u; }
        if (ctx->pc != 0x1FDA74u) { return; }
    }
    ctx->pc = 0x1FDA74u;
label_1fda74:
    // 0x1fda74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fda74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fda78: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1fda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fda7c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1fda7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1fda80: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1fda80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1fda84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fda84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fda88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1fda8c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fda90: 0xc07f6ce  jal         func_1FDB38
    ctx->pc = 0x1FDA90u;
    SET_GPR_U32(ctx, 31, 0x1FDA98u);
    ctx->pc = 0x1FDA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA90u;
            // 0x1fda94: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB38u;
    if (runtime->hasFunction(0x1FDB38u)) {
        auto targetFn = runtime->lookupFunction(0x1FDB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA98u; }
        if (ctx->pc != 0x1FDA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDB38_0x1fdb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA98u; }
        if (ctx->pc != 0x1FDA98u) { return; }
    }
    ctx->pc = 0x1FDA98u;
label_1fda98:
    // 0x1fda98: 0xfe000108  sd          $zero, 0x108($s0)
    ctx->pc = 0x1fda98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 0));
    // 0x1fda9c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1fda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1fdaa0: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x1fdaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x1fdaa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdaa8: 0x2404412b  addiu       $a0, $zero, 0x412B
    ctx->pc = 0x1fdaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16683));
    // 0x1fdaac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1fdaacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1fdab0: 0x34a50d40  ori         $a1, $a1, 0xD40
    ctx->pc = 0x1fdab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3392);
    // 0x1fdab4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fdab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdab8: 0xfe020130  sd          $v0, 0x130($s0)
    ctx->pc = 0x1fdab8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 2));
    // 0x1fdabc: 0xfe040138  sd          $a0, 0x138($s0)
    ctx->pc = 0x1fdabcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 312), GPR_U64(ctx, 4));
    // 0x1fdac0: 0xfe050148  sd          $a1, 0x148($s0)
    ctx->pc = 0x1fdac0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 5));
    // 0x1fdac4: 0xfe030170  sd          $v1, 0x170($s0)
    ctx->pc = 0x1fdac4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 368), GPR_U64(ctx, 3));
    // 0x1fdac8: 0xfe060178  sd          $a2, 0x178($s0)
    ctx->pc = 0x1fdac8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 6));
    // 0x1fdacc: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1fdaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x1fdad0: 0xfe020110  sd          $v0, 0x110($s0)
    ctx->pc = 0x1fdad0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 2));
    // 0x1fdad4: 0xfe000118  sd          $zero, 0x118($s0)
    ctx->pc = 0x1fdad4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 0));
    // 0x1fdad8: 0xfe020120  sd          $v0, 0x120($s0)
    ctx->pc = 0x1fdad8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 2));
    // 0x1fdadc: 0xfe000128  sd          $zero, 0x128($s0)
    ctx->pc = 0x1fdadcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 0));
    // 0x1fdae0: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x1fdae0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x1fdae4: 0xfe030150  sd          $v1, 0x150($s0)
    ctx->pc = 0x1fdae4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 336), GPR_U64(ctx, 3));
    // 0x1fdae8: 0xfe000158  sd          $zero, 0x158($s0)
    ctx->pc = 0x1fdae8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 344), GPR_U64(ctx, 0));
    // 0x1fdaec: 0xfe030160  sd          $v1, 0x160($s0)
    ctx->pc = 0x1fdaecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 352), GPR_U64(ctx, 3));
    // 0x1fdaf0: 0xfe000168  sd          $zero, 0x168($s0)
    ctx->pc = 0x1fdaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 360), GPR_U64(ctx, 0));
    // 0x1fdaf4: 0xfe000180  sd          $zero, 0x180($s0)
    ctx->pc = 0x1fdaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 0));
    // 0x1fdaf8: 0xfe000188  sd          $zero, 0x188($s0)
    ctx->pc = 0x1fdaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 0));
    // 0x1fdafc: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x1fdafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x1fdb00: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x1fdb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x1fdb04: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x1fdb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x1fdb08: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x1fdb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x1fdb0c: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x1fdb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x1fdb10: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x1fdb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x1fdb14: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x1fdb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x1fdb18: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x1fdb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x1fdb1c: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x1fdb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x1fdb20: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x1fdb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x1fdb24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fdb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fdb28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdb28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdb2c: 0x807f87a  j           func_1FE1E8
    ctx->pc = 0x1FDB2Cu;
    ctx->pc = 0x1FDB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB2Cu;
            // 0x1fdb30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1FE1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1FDB34u;
    // 0x1fdb34: 0x0  nop
    ctx->pc = 0x1fdb34u;
    // NOP
    ctx->pc = 0x1fdb38u;
}
