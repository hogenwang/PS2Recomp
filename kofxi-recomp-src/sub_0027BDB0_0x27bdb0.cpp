#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027BDB0
// Address: 0x27bdb0 - 0x27be28
void sub_0027BDB0_0x27bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BDB0_0x27bdb0");
#endif

    switch (ctx->pc) {
        case 0x27be04u: goto label_27be04;
        default: break;
    }

    ctx->pc = 0x27bdb0u;

    // 0x27bdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bdb4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x27bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x27bdb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27bdbc: 0x24452d78  addiu       $a1, $v0, 0x2D78
    ctx->pc = 0x27bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
    // 0x27bdc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27bdc4: 0xdca40410  ld          $a0, 0x410($a1)
    ctx->pc = 0x27bdc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 1040)));
    // 0x27bdc8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27BDC8u;
    {
        const bool branch_taken_0x27bdc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BDC8u;
            // 0x27bdcc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bdc8) {
            ctx->pc = 0x27BE10u;
            goto label_27be10;
        }
    }
    ctx->pc = 0x27BDD0u;
    // 0x27bdd0: 0x2450354c  addiu       $s0, $v0, 0x354C
    ctx->pc = 0x27bdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13644));
    // 0x27bdd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27bdd8: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x27BDD8u;
    {
        const bool branch_taken_0x27bdd8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BDD8u;
            // 0x27bddc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bdd8) {
            ctx->pc = 0x27BE14u;
            goto label_27be14;
        }
    }
    ctx->pc = 0x27BDE0u;
    // 0x27bde0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27bde4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27bde8: 0x8c4206f8  lw          $v0, 0x6F8($v0)
    ctx->pc = 0x27bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1784)));
    // 0x27bdec: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x27BDECu;
    {
        const bool branch_taken_0x27bdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bdec) {
            ctx->pc = 0x27BDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BDECu;
            // 0x27bdf0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BE14u;
            goto label_27be14;
        }
    }
    ctx->pc = 0x27BDF4u;
    // 0x27bdf4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27bdf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27bdf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bdfc: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x27BDFCu;
    SET_GPR_U32(ctx, 31, 0x27BE04u);
    ctx->pc = 0x27BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BDFCu;
            // 0x27be00: 0x24a5bd78  addiu       $a1, $a1, -0x4288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (runtime->hasFunction(0x118B90u)) {
        auto targetFn = runtime->lookupFunction(0x118B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE04u; }
        if (ctx->pc != 0x27BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118B90_0x118b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE04u; }
        if (ctx->pc != 0x27BE04u) { return; }
    }
    ctx->pc = 0x27BE04u;
label_27be04:
    // 0x27be04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27BE04u;
    {
        const bool branch_taken_0x27be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE04u;
            // 0x27be08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be04) {
            ctx->pc = 0x27BE14u;
            goto label_27be14;
        }
    }
    ctx->pc = 0x27BE0Cu;
    // 0x27be0c: 0x0  nop
    ctx->pc = 0x27be0cu;
    // NOP
label_27be10:
    // 0x27be10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27be14:
    // 0x27be14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27be14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27be18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27be18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27be1c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE1Cu;
            // 0x27be20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BE24u;
    // 0x27be24: 0x0  nop
    ctx->pc = 0x27be24u;
    // NOP
    ctx->pc = 0x27be28u;
}
