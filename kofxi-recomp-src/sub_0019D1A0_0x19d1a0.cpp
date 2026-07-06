#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D1A0
// Address: 0x19d1a0 - 0x19d250
void sub_0019D1A0_0x19d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D1A0_0x19d1a0");
#endif

    switch (ctx->pc) {
        case 0x19d1b0u: goto label_19d1b0;
        case 0x19d1e4u: goto label_19d1e4;
        case 0x19d218u: goto label_19d218;
        default: break;
    }

    ctx->pc = 0x19d1a0u;

    // 0x19d1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d1a8: 0xc062924  jal         func_18A490
    ctx->pc = 0x19D1A8u;
    SET_GPR_U32(ctx, 31, 0x19D1B0u);
    ctx->pc = 0x18A490u;
    if (runtime->hasFunction(0x18A490u)) {
        auto targetFn = runtime->lookupFunction(0x18A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1B0u; }
        if (ctx->pc != 0x19D1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A490_0x18a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1B0u; }
        if (ctx->pc != 0x19D1B0u) { return; }
    }
    ctx->pc = 0x19D1B0u;
label_19d1b0:
    // 0x19d1b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19d1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d1b4: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x19D1B4u;
    {
        const bool branch_taken_0x19d1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1b4) {
            ctx->pc = 0x19D1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1B4u;
            // 0x19d1b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D244u;
            goto label_19d244;
        }
    }
    ctx->pc = 0x19D1BCu;
    // 0x19d1bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19d1c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19d1c4: 0x8066d9f8  lb          $a2, -0x2608($v1)
    ctx->pc = 0x19d1c4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957560)));
    // 0x19d1c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19d1c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19d1d0: 0x9065db10  lbu         $a1, -0x24F0($v1)
    ctx->pc = 0x19d1d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x19d1d4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19d1d8: 0xa083d9f8  sb          $v1, -0x2608($a0)
    ctx->pc = 0x19d1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957560), (uint8_t)GPR_U32(ctx, 3));
    // 0x19d1dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d1e0: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x19d1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_19d1e4:
    // 0x19d1e4: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x19d1e8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x19d1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x19d1ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D1ECu;
    {
        const bool branch_taken_0x19d1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1ec) {
            ctx->pc = 0x19D208u;
            goto label_19d208;
        }
    }
    ctx->pc = 0x19D1F4u;
    // 0x19d1f4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x19d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19d1f8: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x19d1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19d1fc: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x19d1fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d200: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19D200u;
    {
        const bool branch_taken_0x19d200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d200) {
            ctx->pc = 0x19D204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D200u;
            // 0x19d204: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D1E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d1e4;
        }
    }
    ctx->pc = 0x19D208u;
label_19d208:
    // 0x19d208: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x19d208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19d20c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d210: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d214: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x19d214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_19d218:
    // 0x19d218: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x19d218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x19d21c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x19d21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x19d220: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D220u;
    {
        const bool branch_taken_0x19d220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d220) {
            ctx->pc = 0x19D240u;
            goto label_19d240;
        }
    }
    ctx->pc = 0x19D228u;
    // 0x19d228: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x19d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19d22c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x19d22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19d230: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x19d230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d234: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19D234u;
    {
        const bool branch_taken_0x19d234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d234) {
            ctx->pc = 0x19D238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D234u;
            // 0x19d238: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d218;
        }
    }
    ctx->pc = 0x19D23Cu;
    // 0x19d23c: 0x0  nop
    ctx->pc = 0x19d23cu;
    // NOP
label_19d240:
    // 0x19d240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d244:
    // 0x19d244: 0x3e00008  jr          $ra
    ctx->pc = 0x19D244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D244u;
            // 0x19d248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D24Cu;
    // 0x19d24c: 0x0  nop
    ctx->pc = 0x19d24cu;
    // NOP
    ctx->pc = 0x19d250u;
}
