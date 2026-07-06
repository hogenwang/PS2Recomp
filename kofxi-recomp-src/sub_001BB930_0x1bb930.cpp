#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB930
// Address: 0x1bb930 - 0x1bb9c8
void sub_001BB930_0x1bb930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB930_0x1bb930");
#endif

    switch (ctx->pc) {
        case 0x1bb970u: goto label_1bb970;
        case 0x1bb994u: goto label_1bb994;
        case 0x1bb9a4u: goto label_1bb9a4;
        case 0x1bb9acu: goto label_1bb9ac;
        default: break;
    }

    ctx->pc = 0x1bb930u;

    // 0x1bb930: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bb930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb934: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x1bb934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb938: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB938u;
    {
        const bool branch_taken_0x1bb938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB938u;
            // 0x1bb93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb938) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB940u;
    // 0x1bb940: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1bb940u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bb944: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x1bb944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1bb948: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bb948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bb94c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1bb950: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1bb950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bb954: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1bb954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1bb958: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB958u;
    {
        const bool branch_taken_0x1bb958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bb958) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB960u;
    // 0x1bb960: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1bb960u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1bb964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb968:
    // 0x1bb968: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB970u;
label_1bb970:
    // 0x1bb970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb97c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb980: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bb984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bb988: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bb988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bb98c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB98Cu;
    SET_GPR_U32(ctx, 31, 0x1BB994u);
    ctx->pc = 0x1BB990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB98Cu;
            // 0x1bb990: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB994u; }
        if (ctx->pc != 0x1BB994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB994u; }
        if (ctx->pc != 0x1BB994u) { return; }
    }
    ctx->pc = 0x1BB994u;
label_1bb994:
    // 0x1bb994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb99c: 0xc06ee72  jal         func_1BB9C8
    ctx->pc = 0x1BB99Cu;
    SET_GPR_U32(ctx, 31, 0x1BB9A4u);
    ctx->pc = 0x1BB9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB99Cu;
            // 0x1bb9a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C8u;
    if (runtime->hasFunction(0x1BB9C8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9A4u; }
        if (ctx->pc != 0x1BB9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB9C8_0x1bb9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9A4u; }
        if (ctx->pc != 0x1BB9A4u) { return; }
    }
    ctx->pc = 0x1BB9A4u;
label_1bb9a4:
    // 0x1bb9a4: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB9A4u;
    SET_GPR_U32(ctx, 31, 0x1BB9ACu);
    ctx->pc = 0x1BB9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9A4u;
            // 0x1bb9a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9ACu; }
        if (ctx->pc != 0x1BB9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9ACu; }
        if (ctx->pc != 0x1BB9ACu) { return; }
    }
    ctx->pc = 0x1BB9ACu;
label_1bb9ac:
    // 0x1bb9ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb9b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb9b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bb9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb9bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bb9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bb9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9C0u;
            // 0x1bb9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB9C8u;
    ctx->pc = 0x1bb9c8u;
}
