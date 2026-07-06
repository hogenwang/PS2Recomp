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

// Function: sub_00283670
// Address: 0x283670 - 0x283738
void sub_00283670_0x283670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283670_0x283670");
#endif

    switch (ctx->pc) {
        case 0x283690u: goto label_283690;
        case 0x2836f8u: goto label_2836f8;
        default: break;
    }

    ctx->pc = 0x283670u;

    // 0x283670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283674: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x283674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28367c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28367cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x283684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x283688: 0xc0a0ecc  jal         func_283B30
    ctx->pc = 0x283688u;
    SET_GPR_U32(ctx, 31, 0x283690u);
    ctx->pc = 0x28368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283688u;
    // 0x28368c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283B30u, 0x283688u, 0x283690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283690u;
label_283690:
    // 0x283690: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x283690u;
    {
        const bool branch_taken_0x283690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283690u;
        // 0x283694: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283690) {
            ctx->pc = 0x283724u;
            goto label_283724;
        }
    }
    ctx->pc = 0x283698u;
    // 0x283698: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x283698u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x28369c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x28369cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2836a0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2836a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2836a4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2836a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2836a8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2836a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2836ac: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2836ACu;
    {
        const bool branch_taken_0x2836ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2836B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836ACu;
        // 0x2836b0: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836ac) {
            ctx->pc = 0x2836BCu;
            goto label_2836bc;
        }
    }
    ctx->pc = 0x2836B4u;
    // 0x2836b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2836B4u;
    {
        const bool branch_taken_0x2836b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836B4u;
        // 0x2836b8: 0xfe200000  sd          $zero, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836b4) {
            ctx->pc = 0x28371Cu;
            goto label_28371c;
        }
    }
    ctx->pc = 0x2836BCu;
label_2836bc:
    // 0x2836bc: 0x2ce20009  sltiu       $v0, $a3, 0x9
    ctx->pc = 0x2836bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2836c0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2836C0u;
    {
        const bool branch_taken_0x2836c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836C0u;
        // 0x2836c4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836c0) {
            ctx->pc = 0x283720u;
            goto label_283720;
        }
    }
    ctx->pc = 0x2836C8u;
    // 0x2836c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2836C8u;
    {
        const bool branch_taken_0x2836c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836C8u;
        // 0x2836cc: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836c8) {
            ctx->pc = 0x2836D8u;
            goto label_2836d8;
        }
    }
    ctx->pc = 0x2836D0u;
    // 0x2836d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2836D0u;
    {
        const bool branch_taken_0x2836d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836D0u;
        // 0x2836d4: 0x92040017  lbu         $a0, 0x17($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836d0) {
            ctx->pc = 0x2836E0u;
            goto label_2836e0;
        }
    }
    ctx->pc = 0x2836D8u;
label_2836d8:
    // 0x2836d8: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2836d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2836dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2836dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2836e0:
    // 0x2836e0: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x2836e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x2836e4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x2836e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2836e8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2836e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2836ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2836ECu;
    {
        const bool branch_taken_0x2836ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836ECu;
        // 0x2836f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836ec) {
            ctx->pc = 0x283708u;
            goto label_283708;
        }
    }
    ctx->pc = 0x2836F4u;
    // 0x2836f4: 0x0  nop
    ctx->pc = 0x2836f4u;
    // NOP
label_2836f8:
    // 0x2836f8: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2836f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2836fc: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2836fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x283700: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x283700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x283704: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x283704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_283708:
    // 0x283708: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x283708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28370c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x28370cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x283710: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283710u;
    {
        const bool branch_taken_0x283710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283710) {
            ctx->pc = 0x2836F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2836f8;
        }
    }
    ctx->pc = 0x283718u;
    // 0x283718: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x283718u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_28371c:
    // 0x28371c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28371cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283720:
    // 0x283720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x283720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_283724:
    // 0x283724: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28372c: 0x3e00008  jr          $ra
    ctx->pc = 0x28372Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28372Cu;
        // 0x283730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28372Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283734u;
    // 0x283734: 0x0  nop
    ctx->pc = 0x283734u;
    // NOP
    if (ctx->pc == 0x283734u) { ctx->pc = 0x283738u; }
}
