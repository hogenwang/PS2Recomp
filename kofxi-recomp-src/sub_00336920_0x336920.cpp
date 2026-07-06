#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336920
// Address: 0x336920 - 0x3369a0
void sub_00336920_0x336920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336920_0x336920");
#endif

    switch (ctx->pc) {
        case 0x336988u: goto label_336988;
        default: break;
    }

    ctx->pc = 0x336920u;

    // 0x336920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336924: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x336924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x336928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33692c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336934: 0x9463ea26  lhu         $v1, -0x15DA($v1)
    ctx->pc = 0x336934u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961702)));
    // 0x336938: 0x9442ea32  lhu         $v0, -0x15CE($v0)
    ctx->pc = 0x336938u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961714)));
    // 0x33693c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x336940: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x336940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336944: 0x306200a0  andi        $v0, $v1, 0xA0
    ctx->pc = 0x336944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
    // 0x336948: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x336948u;
    {
        const bool branch_taken_0x336948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336948u;
            // 0x33694c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336948) {
            ctx->pc = 0x336988u;
            goto label_336988;
        }
    }
    ctx->pc = 0x336950u;
    // 0x336950: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x336950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x336954: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x336954u;
    {
        const bool branch_taken_0x336954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336954u;
            // 0x336958: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336954) {
            ctx->pc = 0x336960u;
            goto label_336960;
        }
    }
    ctx->pc = 0x33695Cu;
    // 0x33695c: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x33695cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_336960:
    // 0x336960: 0x6030003  bgezl       $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336960u;
    {
        const bool branch_taken_0x336960 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x336960) {
            ctx->pc = 0x336964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336960u;
            // 0x336964: 0x205102a  slt         $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x336970u;
            goto label_336970;
        }
    }
    ctx->pc = 0x336968u;
    // 0x336968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x336968u;
    {
        const bool branch_taken_0x336968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336968u;
            // 0x33696c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336968) {
            ctx->pc = 0x33698Cu;
            goto label_33698c;
        }
    }
    ctx->pc = 0x336970u;
label_336970:
    // 0x336970: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x336970u;
    {
        const bool branch_taken_0x336970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336970) {
            ctx->pc = 0x336974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336970u;
            // 0x336974: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336980u;
            goto label_336980;
        }
    }
    ctx->pc = 0x336978u;
    // 0x336978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336978u;
    {
        const bool branch_taken_0x336978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336978u;
            // 0x33697c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336978) {
            ctx->pc = 0x33698Cu;
            goto label_33698c;
        }
    }
    ctx->pc = 0x336980u;
label_336980:
    // 0x336980: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336980u;
    SET_GPR_U32(ctx, 31, 0x336988u);
    ctx->pc = 0x336984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336980u;
            // 0x336984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336988u; }
        if (ctx->pc != 0x336988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336988u; }
        if (ctx->pc != 0x336988u) { return; }
    }
    ctx->pc = 0x336988u;
label_336988:
    // 0x336988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33698c:
    // 0x33698c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33698cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336994: 0x3e00008  jr          $ra
    ctx->pc = 0x336994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336994u;
            // 0x336998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33699Cu;
    // 0x33699c: 0x0  nop
    ctx->pc = 0x33699cu;
    // NOP
    ctx->pc = 0x3369a0u;
}
