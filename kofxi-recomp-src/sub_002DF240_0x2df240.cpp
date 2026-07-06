#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF240
// Address: 0x2df240 - 0x2df2c8
void sub_002DF240_0x2df240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF240_0x2df240");
#endif

    switch (ctx->pc) {
        case 0x2df254u: goto label_2df254;
        case 0x2df2b0u: goto label_2df2b0;
        default: break;
    }

    ctx->pc = 0x2df240u;

    // 0x2df240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2df244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2df248: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2df248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2df24c: 0xc0b7536  jal         func_2DD4D8
    ctx->pc = 0x2DF24Cu;
    SET_GPR_U32(ctx, 31, 0x2DF254u);
    ctx->pc = 0x2DF250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF24Cu;
            // 0x2df250: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD4D8u;
    if (runtime->hasFunction(0x2DD4D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DD4D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF254u; }
        if (ctx->pc != 0x2DF254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DD4D8_0x2dd4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF254u; }
        if (ctx->pc != 0x2DF254u) { return; }
    }
    ctx->pc = 0x2DF254u;
label_2df254:
    // 0x2df254: 0x93a50005  lbu         $a1, 0x5($sp)
    ctx->pc = 0x2df254u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x2df258: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x2df258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2df25c: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x2df25cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2df260: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x2df260u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2df264: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2df264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2df268: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x2df268u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x2df26c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x2df26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x2df270: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x2df270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2df274: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2df274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2df278: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2df278u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2df27c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x2df27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x2df280: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2df280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x2df284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2df284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2df288: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2df288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2df28c: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x2df28cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2df290: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2df290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2df294: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2df294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2df298: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2df298u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2df29c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2df29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2df2a0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2df2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2df2a4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2df2a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2df2a8: 0xc0b7c70  jal         func_2DF1C0
    ctx->pc = 0x2DF2A8u;
    SET_GPR_U32(ctx, 31, 0x2DF2B0u);
    ctx->pc = 0x2DF2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2A8u;
            // 0x2df2ac: 0x2042025  or          $a0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1C0u;
    if (runtime->hasFunction(0x2DF1C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2B0u; }
        if (ctx->pc != 0x2DF2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1C0_0x2df1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2B0u; }
        if (ctx->pc != 0x2DF2B0u) { return; }
    }
    ctx->pc = 0x2DF2B0u;
label_2df2b0:
    // 0x2df2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2df2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df2b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2df2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df2b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2df2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2BCu;
            // 0x2df2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF2C4u;
    // 0x2df2c4: 0x0  nop
    ctx->pc = 0x2df2c4u;
    // NOP
    ctx->pc = 0x2df2c8u;
}
