#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020ED00
// Address: 0x20ed00 - 0x20ed98
void sub_0020ED00_0x20ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ED00_0x20ed00");
#endif

    switch (ctx->pc) {
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed80u: goto label_20ed80;
        default: break;
    }

    ctx->pc = 0x20ed00u;

    // 0x20ed00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ed04: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x20ed04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20ed08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ed0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20ed10: 0x48600  sll         $s0, $a0, 24
    ctx->pc = 0x20ed10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x20ed14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20ed18: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x20ed18u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x20ed1c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x20ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x20ed20: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20ed24: 0x2484ab48  addiu       $a0, $a0, -0x54B8
    ctx->pc = 0x20ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    // 0x20ed28: 0x24a5a4e0  addiu       $a1, $a1, -0x5B20
    ctx->pc = 0x20ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943968));
    // 0x20ed2c: 0xc0897f6  jal         func_225FD8
    ctx->pc = 0x20ED2Cu;
    SET_GPR_U32(ctx, 31, 0x20ED34u);
    ctx->pc = 0x20ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED2Cu;
            // 0x20ed30: 0x108603  sra         $s0, $s0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225FD8u;
    if (runtime->hasFunction(0x225FD8u)) {
        auto targetFn = runtime->lookupFunction(0x225FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED34u; }
        if (ctx->pc != 0x20ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225FD8_0x225fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED34u; }
        if (ctx->pc != 0x20ED34u) { return; }
    }
    ctx->pc = 0x20ED34u;
label_20ed34:
    // 0x20ed34: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x20ed34u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x20ed38: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x20ed38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ed3c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20ed3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x20ed40: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x20ed40u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x20ed44: 0xadeda928  sw          $t5, -0x56D8($t7)
    ctx->pc = 0x20ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945064), GPR_U32(ctx, 13));
    // 0x20ed48: 0xa1d0a938  sb          $s0, -0x56C8($t6)
    ctx->pc = 0x20ed48u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294945080), (uint8_t)GPR_U32(ctx, 16));
    // 0x20ed4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20ed50: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20ed50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x20ed54: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20ed54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20ed58: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x20ed58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x20ed5c: 0xa1f1a939  sb          $s1, -0x56C7($t7)
    ctx->pc = 0x20ed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294945081), (uint8_t)GPR_U32(ctx, 17));
    // 0x20ed60: 0xa1c0a93a  sb          $zero, -0x56C6($t6)
    ctx->pc = 0x20ed60u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294945082), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ed64: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20ed64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed68: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x20ed68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed6c: 0x2484f9a8  addiu       $a0, $a0, -0x658
    ctx->pc = 0x20ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965672));
    // 0x20ed70: 0x24e7f9b8  addiu       $a3, $a3, -0x648
    ctx->pc = 0x20ed70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965688));
    // 0x20ed74: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x20ed74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x20ed78: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20ED78u;
    SET_GPR_U32(ctx, 31, 0x20ED80u);
    ctx->pc = 0x20ED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED78u;
            // 0x20ed7c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED80u; }
        if (ctx->pc != 0x20ED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED80u; }
        if (ctx->pc != 0x20ED80u) { return; }
    }
    ctx->pc = 0x20ED80u;
label_20ed80:
    // 0x20ed80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ed80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ed84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ed88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ed88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ed8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ed90: 0x3e00008  jr          $ra
    ctx->pc = 0x20ED90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ED94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED90u;
            // 0x20ed94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20ED98u;
    ctx->pc = 0x20ed98u;
}
