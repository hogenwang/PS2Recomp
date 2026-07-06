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

// Function: sub_00215650
// Address: 0x215650 - 0x215748
void sub_00215650_0x215650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215650_0x215650");
#endif

    switch (ctx->pc) {
        case 0x21566cu: goto label_21566c;
        case 0x2156bcu: goto label_2156bc;
        case 0x2156ccu: goto label_2156cc;
        case 0x21571cu: goto label_21571c;
        case 0x215724u: goto label_215724;
        default: break;
    }

    ctx->pc = 0x215650u;

label_215650:
    // 0x215650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215658: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21565c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21565cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215660: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215664: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215664u;
    SET_GPR_U32(ctx, 31, 0x21566Cu);
    ctx->pc = 0x215668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215664u;
    // 0x215668: 0x24840ab8  addiu       $a0, $a0, 0xAB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215664u, 0x21566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21566Cu;
label_21566c:
    // 0x21566c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21566cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215670: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215674: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215678: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x215678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x21567c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21567cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215680: 0x8043e52  j           func_10F948
    ctx->pc = 0x215680u;
    ctx->pc = 0x215684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215680u;
    // 0x215684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x215688u;
    // 0x215688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21568c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21568cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215694: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x215694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x215698: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21569c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21569cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2156a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2156a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2156a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156a8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2156a8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2156ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2156acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2156b0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2156b4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2156B4u;
    SET_GPR_U32(ctx, 31, 0x2156BCu);
    ctx->pc = 0x2156B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156B4u;
    // 0x2156b8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2156B4u, 0x2156BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156BCu;
label_2156bc:
    // 0x2156bc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2156bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2156c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2156c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156c4: 0xc085594  jal         func_215650
    ctx->pc = 0x2156C4u;
    SET_GPR_U32(ctx, 31, 0x2156CCu);
    ctx->pc = 0x2156C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156C4u;
    // 0x2156c8: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215650u;
    goto label_215650;
    ctx->pc = 0x2156CCu;
label_2156cc:
    // 0x2156cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2156ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2156d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2156d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2156d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2156d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2156d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2156dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2156dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2156e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2156E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2156E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156E0u;
        // 0x2156e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2156E8u;
    // 0x2156e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2156ec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2156ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2156f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2156f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2156f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2156f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2156f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2156fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2156fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215700: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215708: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21570c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21570cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215710: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x215710u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x215714: 0xc084612  jal         func_211848
    ctx->pc = 0x215714u;
    SET_GPR_U32(ctx, 31, 0x21571Cu);
    ctx->pc = 0x215718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215714u;
    // 0x215718: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x215714u, 0x21571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21571Cu;
label_21571c:
    // 0x21571c: 0xc085594  jal         func_215650
    ctx->pc = 0x21571Cu;
    SET_GPR_U32(ctx, 31, 0x215724u);
    ctx->pc = 0x215720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21571Cu;
    // 0x215720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215650u;
    goto label_215650;
    ctx->pc = 0x215724u;
label_215724:
    // 0x215724: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x215724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21572c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21572cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x215730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215738: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x215738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21573c: 0x3e00008  jr          $ra
    ctx->pc = 0x21573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21573Cu;
        // 0x215740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21573Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215744u;
    // 0x215744: 0x0  nop
    ctx->pc = 0x215744u;
    // NOP
    if (ctx->pc == 0x215744u) { ctx->pc = 0x215748u; }
}
