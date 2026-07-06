#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205250
// Address: 0x205250 - 0x2052e0
void sub_00205250_0x205250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205250_0x205250");
#endif

    switch (ctx->pc) {
        case 0x205290u: goto label_205290;
        case 0x2052bcu: goto label_2052bc;
        default: break;
    }

    ctx->pc = 0x205250u;

    // 0x205250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205254: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x205254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x205258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20525c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x20525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x205260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x205264: 0x8c469bf8  lw          $a2, -0x6408($v0)
    ctx->pc = 0x205264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205268: 0x90c50065  lbu         $a1, 0x65($a2)
    ctx->pc = 0x205268u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 101)));
    // 0x20526c: 0x8cc3005c  lw          $v1, 0x5C($a2)
    ctx->pc = 0x20526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x205270: 0x90c20064  lbu         $v0, 0x64($a2)
    ctx->pc = 0x205270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x205274: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x205274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x205278: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x205278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20527c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x205280: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x205280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x205284: 0x90700524  lbu         $s0, 0x524($v1)
    ctx->pc = 0x205284u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1316)));
    // 0x205288: 0xc080e9c  jal         func_203A70
    ctx->pc = 0x205288u;
    SET_GPR_U32(ctx, 31, 0x205290u);
    ctx->pc = 0x20528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205288u;
            // 0x20528c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203A70u;
    if (runtime->hasFunction(0x203A70u)) {
        auto targetFn = runtime->lookupFunction(0x203A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205290u; }
        if (ctx->pc != 0x205290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203A70_0x203a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205290u; }
        if (ctx->pc != 0x205290u) { return; }
    }
    ctx->pc = 0x205290u;
label_205290:
    // 0x205290: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x205290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x205294: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x205298: 0x8c43b7d0  lw          $v1, -0x4830($v0)
    ctx->pc = 0x205298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948816)));
    // 0x20529c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052a0: 0x34210400  ori         $at, $at, 0x400
    ctx->pc = 0x2052a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1024);
    // 0x2052a4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2052a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2052a8: 0x618021  addu        $s0, $v1, $at
    ctx->pc = 0x2052a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2052ac: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2052acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2052b0: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x2052b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2052b4: 0xc08144c  jal         func_205130
    ctx->pc = 0x2052B4u;
    SET_GPR_U32(ctx, 31, 0x2052BCu);
    ctx->pc = 0x2052B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2052B4u;
            // 0x2052b8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205130u;
    if (runtime->hasFunction(0x205130u)) {
        auto targetFn = runtime->lookupFunction(0x205130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052BCu; }
        if (ctx->pc != 0x2052BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205130_0x205130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052BCu; }
        if (ctx->pc != 0x2052BCu) { return; }
    }
    ctx->pc = 0x2052BCu;
label_2052bc:
    // 0x2052bc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2052bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2052c0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2052c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2052c4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2052c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2052c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2052cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2052ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2052d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2052d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2052d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2052D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2052D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2052D4u;
            // 0x2052d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2052DCu;
    // 0x2052dc: 0x0  nop
    ctx->pc = 0x2052dcu;
    // NOP
    ctx->pc = 0x2052e0u;
}
