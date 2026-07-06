#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002868D8
// Address: 0x2868d8 - 0x286938
void sub_002868D8_0x2868d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002868D8_0x2868d8");
#endif

    switch (ctx->pc) {
        case 0x28690cu: goto label_28690c;
        case 0x286928u: goto label_286928;
        default: break;
    }

    ctx->pc = 0x2868d8u;

    // 0x2868d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2868d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2868dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2868dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2868e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2868e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868e4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2868E4u;
    {
        const bool branch_taken_0x2868e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868E4u;
            // 0x2868e8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868e4) {
            ctx->pc = 0x286928u;
            goto label_286928;
        }
    }
    ctx->pc = 0x2868ECu;
    // 0x2868ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2868ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2868f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2868F0u;
    {
        const bool branch_taken_0x2868f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868F0u;
            // 0x2868f4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868f0) {
            ctx->pc = 0x286910u;
            goto label_286910;
        }
    }
    ctx->pc = 0x2868F8u;
    // 0x2868f8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2868f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2868fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2868FCu;
    {
        const bool branch_taken_0x2868fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868FCu;
            // 0x286900: 0x34628000  ori         $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868fc) {
            ctx->pc = 0x286914u;
            goto label_286914;
        }
    }
    ctx->pc = 0x286904u;
    // 0x286904: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x286904u;
    SET_GPR_U32(ctx, 31, 0x28690Cu);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28690Cu; }
        if (ctx->pc != 0x28690Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28690Cu; }
        if (ctx->pc != 0x28690Cu) { return; }
    }
    ctx->pc = 0x28690Cu;
label_28690c:
    // 0x28690c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x28690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_286910:
    // 0x286910: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x286910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_286914:
    // 0x286914: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x286914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286918: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x286918u;
    {
        const bool branch_taken_0x286918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28691Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286918u;
            // 0x28691c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286918) {
            ctx->pc = 0x286928u;
            goto label_286928;
        }
    }
    ctx->pc = 0x286920u;
    // 0x286920: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x286920u;
    SET_GPR_U32(ctx, 31, 0x286928u);
    ctx->pc = 0x286924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286920u;
            // 0x286924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286928u; }
        if (ctx->pc != 0x286928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286928u; }
        if (ctx->pc != 0x286928u) { return; }
    }
    ctx->pc = 0x286928u;
label_286928:
    // 0x286928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28692c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28692cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286930: 0x3e00008  jr          $ra
    ctx->pc = 0x286930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286930u;
            // 0x286934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286938u;
    ctx->pc = 0x286938u;
}
