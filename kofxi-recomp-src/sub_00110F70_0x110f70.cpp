#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00110F70
// Address: 0x110f70 - 0x111008
void sub_00110F70_0x110f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F70_0x110f70");
#endif

    switch (ctx->pc) {
        case 0x110f8cu: goto label_110f8c;
        case 0x110fd0u: goto label_110fd0;
        default: break;
    }

    ctx->pc = 0x110f70u;

    // 0x110f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110f74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110f84: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x110F84u;
    SET_GPR_U32(ctx, 31, 0x110F8Cu);
    ctx->pc = 0x110F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F84u;
    // 0x110f88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x110F84u, 0x110F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F8Cu;
label_110f8c:
    // 0x110f8c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x110f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x110f90: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x110f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x110f94: 0x24638200  addiu       $v1, $v1, -0x7E00
    ctx->pc = 0x110f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x110f98: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x110f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x110f9c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x110f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x110fa0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x110fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x110fa4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x110fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x110fa8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x110fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x110fac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110FACu;
    {
        const bool branch_taken_0x110fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FACu;
        // 0x110fb0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fac) {
            ctx->pc = 0x110FBCu;
            goto label_110fbc;
        }
    }
    ctx->pc = 0x110FB4u;
    // 0x110fb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x110FB4u;
    {
        const bool branch_taken_0x110fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FB4u;
        // 0x110fb8: 0xac710028  sw          $s1, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fb4) {
            ctx->pc = 0x110FF0u;
            goto label_110ff0;
        }
    }
    ctx->pc = 0x110FBCu;
label_110fbc:
    // 0x110fbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fc0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x110fc4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x110FC4u;
    {
        const bool branch_taken_0x110fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fc4) {
            ctx->pc = 0x110FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110FC4u;
            // 0x110fc8: 0xac910014  sw          $s1, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110FF0u;
            goto label_110ff0;
        }
    }
    ctx->pc = 0x110FCCu;
    // 0x110fcc: 0x0  nop
    ctx->pc = 0x110fccu;
    // NOP
label_110fd0:
    // 0x110fd0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x110fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fd4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x110fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x110fd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fdc: 0x0  nop
    ctx->pc = 0x110fdcu;
    // NOP
    // 0x110fe0: 0x0  nop
    ctx->pc = 0x110fe0u;
    // NOP
    // 0x110fe4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x110FE4u;
    {
        const bool branch_taken_0x110fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110fe4) {
            ctx->pc = 0x110FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x110FECu;
    // 0x110fec: 0xac910014  sw          $s1, 0x14($a0)
    ctx->pc = 0x110fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
label_110ff0:
    // 0x110ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110ff4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ffc: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x110FFCu;
    ctx->pc = 0x111000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FFCu;
    // 0x111000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x111004u;
    // 0x111004: 0x0  nop
    ctx->pc = 0x111004u;
    // NOP
    if (ctx->pc == 0x111004u) { ctx->pc = 0x111008u; }
}
