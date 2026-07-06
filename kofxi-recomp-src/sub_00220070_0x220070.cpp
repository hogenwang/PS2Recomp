#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220070
// Address: 0x220070 - 0x220100
void sub_00220070_0x220070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220070_0x220070");
#endif

    switch (ctx->pc) {
        case 0x220094u: goto label_220094;
        case 0x2200acu: goto label_2200ac;
        case 0x2200e4u: goto label_2200e4;
        default: break;
    }

    ctx->pc = 0x220070u;

    // 0x220070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220078: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22007c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x22007cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x220080: 0x8e0fc9ec  lw          $t7, -0x3614($s0)
    ctx->pc = 0x220080u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953452)));
    // 0x220084: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x220084u;
    {
        const bool branch_taken_0x220084 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220084u;
            // 0x220088: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220084) {
            ctx->pc = 0x220098u;
            goto label_220098;
        }
    }
    ctx->pc = 0x22008Cu;
    // 0x22008c: 0xc088040  jal         func_220100
    ctx->pc = 0x22008Cu;
    SET_GPR_U32(ctx, 31, 0x220094u);
    ctx->pc = 0x220100u;
    if (runtime->hasFunction(0x220100u)) {
        auto targetFn = runtime->lookupFunction(0x220100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220094u; }
        if (ctx->pc != 0x220094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220100_0x220100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220094u; }
        if (ctx->pc != 0x220094u) { return; }
    }
    ctx->pc = 0x220094u;
label_220094:
    // 0x220094: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x220094u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_220098:
    // 0x220098: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22009c: 0x8de5c9f0  lw          $a1, -0x3610($t7)
    ctx->pc = 0x22009cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953456)));
    // 0x2200a0: 0x248422e0  addiu       $a0, $a0, 0x22E0
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8928));
    // 0x2200a4: 0xc089e36  jal         func_2278D8
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2200A4u;
            // 0x2200a8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2278D8u;
    if (runtime->hasFunction(0x2278D8u)) {
        auto targetFn = runtime->lookupFunction(0x2278D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200ACu; }
        if (ctx->pc != 0x2200ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002278D8_0x2278d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200ACu; }
        if (ctx->pc != 0x2200ACu) { return; }
    }
    ctx->pc = 0x2200ACu;
label_2200ac:
    // 0x2200ac: 0xae02c9ec  sw          $v0, -0x3614($s0)
    ctx->pc = 0x2200acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953452), GPR_U32(ctx, 2));
    // 0x2200b0: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x2200b0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2200b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2200b8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2200b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2200bc: 0x248422f0  addiu       $a0, $a0, 0x22F0
    ctx->pc = 0x2200bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8944));
    // 0x2200c0: 0x24e72300  addiu       $a3, $a3, 0x2300
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8960));
    // 0x2200c4: 0x240500c6  addiu       $a1, $zero, 0xC6
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x2200c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2200c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200cc: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2200CCu;
    {
        const bool branch_taken_0x2200cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2200D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2200CCu;
            // 0x2200d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200cc) {
            ctx->pc = 0x2200E4u;
            goto label_2200e4;
        }
    }
    ctx->pc = 0x2200D4u;
    // 0x2200d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2200d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2200d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2200d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2200dc: 0x80897d6  j           func_225F58
    ctx->pc = 0x2200DCu;
    ctx->pc = 0x2200E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2200DCu;
            // 0x2200e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225F58_0x225f58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2200E4u;
label_2200e4:
    // 0x2200e4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2200e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2200e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2200e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2200ec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2200f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2200f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2200f4: 0xadeec9f4  sw          $t6, -0x360C($t7)
    ctx->pc = 0x2200f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294953460), GPR_U32(ctx, 14));
    // 0x2200f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2200F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2200FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2200F8u;
            // 0x2200fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220100u;
    ctx->pc = 0x220100u;
}
