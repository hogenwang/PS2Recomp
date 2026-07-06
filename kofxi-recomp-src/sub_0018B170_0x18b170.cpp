#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B170
// Address: 0x18b170 - 0x18b1f0
void sub_0018B170_0x18b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B170_0x18b170");
#endif

    switch (ctx->pc) {
        case 0x18b170u: goto label_18b170;
        case 0x18b174u: goto label_18b174;
        case 0x18b178u: goto label_18b178;
        case 0x18b17cu: goto label_18b17c;
        case 0x18b180u: goto label_18b180;
        case 0x18b184u: goto label_18b184;
        case 0x18b188u: goto label_18b188;
        case 0x18b18cu: goto label_18b18c;
        case 0x18b190u: goto label_18b190;
        case 0x18b194u: goto label_18b194;
        case 0x18b198u: goto label_18b198;
        case 0x18b19cu: goto label_18b19c;
        case 0x18b1a0u: goto label_18b1a0;
        case 0x18b1a4u: goto label_18b1a4;
        case 0x18b1a8u: goto label_18b1a8;
        case 0x18b1acu: goto label_18b1ac;
        case 0x18b1b0u: goto label_18b1b0;
        case 0x18b1b4u: goto label_18b1b4;
        case 0x18b1b8u: goto label_18b1b8;
        case 0x18b1bcu: goto label_18b1bc;
        case 0x18b1c0u: goto label_18b1c0;
        case 0x18b1c4u: goto label_18b1c4;
        case 0x18b1c8u: goto label_18b1c8;
        case 0x18b1ccu: goto label_18b1cc;
        case 0x18b1d0u: goto label_18b1d0;
        case 0x18b1d4u: goto label_18b1d4;
        case 0x18b1d8u: goto label_18b1d8;
        case 0x18b1dcu: goto label_18b1dc;
        case 0x18b1e0u: goto label_18b1e0;
        case 0x18b1e4u: goto label_18b1e4;
        case 0x18b1e8u: goto label_18b1e8;
        case 0x18b1ecu: goto label_18b1ec;
        default: break;
    }

    ctx->pc = 0x18b170u;

label_18b170:
    // 0x18b170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18b174:
    // 0x18b174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18b178:
    // 0x18b178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18b17c:
    // 0x18b17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18b180:
    // 0x18b180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b184:
    // 0x18b184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b188:
    // 0x18b188: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b18c:
    // 0x18b18c: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18b18cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b190:
    // 0x18b190: 0x261040a0  addiu       $s0, $s0, 0x40A0
    ctx->pc = 0x18b190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16544));
label_18b194:
    // 0x18b194: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18b198:
    // 0x18b198: 0xa051bb60  sb          $s1, -0x44A0($v0)
    ctx->pc = 0x18b198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 17));
label_18b19c:
    // 0x18b19c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b1a0:
    // 0x18b1a0: 0x40f809  jalr        $v0
label_18b1a4:
    if (ctx->pc == 0x18B1A4u) {
        ctx->pc = 0x18B1A4u;
            // 0x18b1a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18B1A8u;
        goto label_18b1a8;
    }
    ctx->pc = 0x18B1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B1A8u);
        ctx->pc = 0x18B1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1A0u;
            // 0x18b1a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18B1A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18B1A8u; }
            if (ctx->pc != 0x18B1A8u) { return; }
        }
        }
    }
    ctx->pc = 0x18B1A8u;
label_18b1a8:
    // 0x18b1a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b1ac:
    // 0x18b1ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b1b0:
    // 0x18b1b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b1b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b1b4:
    // 0x18b1b4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18b1b8:
    if (ctx->pc == 0x18B1B8u) {
        ctx->pc = 0x18B1B8u;
            // 0x18b1b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x18B1BCu;
        goto label_18b1bc;
    }
    ctx->pc = 0x18B1B4u;
    {
        const bool branch_taken_0x18b1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b1b4) {
            ctx->pc = 0x18B1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1B4u;
            // 0x18b1b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B1C4u;
            goto label_18b1c4;
        }
    }
    ctx->pc = 0x18B1BCu;
label_18b1bc:
    // 0x18b1bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_18b1c0:
    if (ctx->pc == 0x18B1C0u) {
        ctx->pc = 0x18B1C0u;
            // 0x18b1c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x18B1C4u;
        goto label_18b1c4;
    }
    ctx->pc = 0x18B1BCu;
    {
        const bool branch_taken_0x18b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1BCu;
            // 0x18b1c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1bc) {
            ctx->pc = 0x18B1D8u;
            goto label_18b1d8;
        }
    }
    ctx->pc = 0x18B1C4u;
label_18b1c4:
    // 0x18b1c4: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x18b1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_18b1c8:
    // 0x18b1c8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18b1cc:
    if (ctx->pc == 0x18B1CCu) {
        ctx->pc = 0x18B1CCu;
            // 0x18b1cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x18B1D0u;
        goto label_18b1d0;
    }
    ctx->pc = 0x18B1C8u;
    {
        const bool branch_taken_0x18b1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1C8u;
            // 0x18b1cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1c8) {
            ctx->pc = 0x18B194u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b194;
        }
    }
    ctx->pc = 0x18B1D0u;
label_18b1d0:
    // 0x18b1d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18b1d4:
    // 0x18b1d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18b1d8:
    // 0x18b1d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b1dc:
    // 0x18b1dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b1e0:
    // 0x18b1e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b1e4:
    // 0x18b1e4: 0x3e00008  jr          $ra
label_18b1e8:
    if (ctx->pc == 0x18B1E8u) {
        ctx->pc = 0x18B1E8u;
            // 0x18b1e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x18B1ECu;
        goto label_18b1ec;
    }
    ctx->pc = 0x18B1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1E4u;
            // 0x18b1e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B1ECu;
label_18b1ec:
    // 0x18b1ec: 0x0  nop
    ctx->pc = 0x18b1ecu;
    // NOP
    ctx->pc = 0x18b1f0u;
}
