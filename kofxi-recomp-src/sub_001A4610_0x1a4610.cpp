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

// Function: sub_001A4610
// Address: 0x1a4610 - 0x1a4740
void sub_001A4610_0x1a4610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4610_0x1a4610");
#endif

    switch (ctx->pc) {
        case 0x1a46bcu: goto label_1a46bc;
        case 0x1a4720u: goto label_1a4720;
        case 0x1a4734u: goto label_1a4734;
        default: break;
    }

    ctx->pc = 0x1a4610u;

    // 0x1a4610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4614: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a4614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a4618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a461c: 0xac64e100  sw          $a0, -0x1F00($v1)
    ctx->pc = 0x1a461cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959360), GPR_U32(ctx, 4));
    // 0x1a4620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4624: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A4624u;
    {
        const bool branch_taken_0x1a4624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4624) {
            ctx->pc = 0x1A46C4u;
            goto label_1a46c4;
        }
    }
    ctx->pc = 0x1A462Cu;
    // 0x1a462c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4630: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4630u;
    {
        const bool branch_taken_0x1a4630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4630) {
            ctx->pc = 0x1A4648u;
            goto label_1a4648;
        }
    }
    ctx->pc = 0x1A4638u;
    // 0x1a4638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4638u;
    {
        const bool branch_taken_0x1a4638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4638) {
            ctx->pc = 0x1A4648u;
            goto label_1a4648;
        }
    }
    ctx->pc = 0x1A4640u;
    // 0x1a4640: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1A4640u;
    {
        const bool branch_taken_0x1a4640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4640u;
        // 0x1a4644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4640) {
            ctx->pc = 0x1A4738u;
            goto label_1a4738;
        }
    }
    ctx->pc = 0x1A4648u;
label_1a4648:
    // 0x1a4648: 0x3c030126  lui         $v1, 0x126
    ctx->pc = 0x1a4648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)294 << 16));
    // 0x1a464c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a464cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4650: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x1a4650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x1a4654: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a4654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a4658: 0xac43b7e8  sw          $v1, -0x4818($v0)
    ctx->pc = 0x1a4658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948840), GPR_U32(ctx, 3));
    // 0x1a465c: 0x612021  addu        $a0, $v1, $at
    ctx->pc = 0x1a465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1a4660: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a4660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4664: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x1a4664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x1a4668: 0xac44b7d8  sw          $a0, -0x4828($v0)
    ctx->pc = 0x1a4668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948824), GPR_U32(ctx, 4));
    // 0x1a466c: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x1a466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1a4670: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1a4674: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x1a4674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x1a4678: 0xac43a478  sw          $v1, -0x5B88($v0)
    ctx->pc = 0x1a4678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943864), GPR_U32(ctx, 3));
    // 0x1a467c: 0x612021  addu        $a0, $v1, $at
    ctx->pc = 0x1a467cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1a4680: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1a4680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1a4684: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x1a4684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x1a4688: 0xac44a468  sw          $a0, -0x5B98($v0)
    ctx->pc = 0x1a4688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943848), GPR_U32(ctx, 4));
    // 0x1a468c: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x1a468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1a4690: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1a4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1a4694: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x1a4694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x1a4698: 0xac43a488  sw          $v1, -0x5B78($v0)
    ctx->pc = 0x1a4698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943880), GPR_U32(ctx, 3));
    // 0x1a469c: 0x612021  addu        $a0, $v1, $at
    ctx->pc = 0x1a469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1a46a0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1a46a4: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x1a46a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x1a46a8: 0xac44a490  sw          $a0, -0x5B70($v0)
    ctx->pc = 0x1a46a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943888), GPR_U32(ctx, 4));
    // 0x1a46ac: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x1a46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1a46b0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a46b4: 0xc0bf40c  jal         func_2FD030
    ctx->pc = 0x1A46B4u;
    SET_GPR_U32(ctx, 31, 0x1A46BCu);
    ctx->pc = 0x1A46B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A46B4u;
    // 0x1a46b8: 0xac43b7c0  sw          $v1, -0x4840($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948800), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD030u, 0x1A46B4u, 0x1A46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46BCu;
label_1a46bc:
    // 0x1a46bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A46BCu;
    {
        const bool branch_taken_0x1a46bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a46bc) {
            ctx->pc = 0x1A4734u;
            goto label_1a4734;
        }
    }
    ctx->pc = 0x1A46C4u;
label_1a46c4:
    // 0x1a46c4: 0x3c030126  lui         $v1, 0x126
    ctx->pc = 0x1a46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)294 << 16));
    // 0x1a46c8: 0x3c01000a  lui         $at, 0xA
    ctx->pc = 0x1a46c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)10 << 16));
    // 0x1a46cc: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x1a46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x1a46d0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1a46d4: 0x34210200  ori         $at, $at, 0x200
    ctx->pc = 0x1a46d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)512);
    // 0x1a46d8: 0xac43a490  sw          $v1, -0x5B70($v0)
    ctx->pc = 0x1a46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943888), GPR_U32(ctx, 3));
    // 0x1a46dc: 0x612021  addu        $a0, $v1, $at
    ctx->pc = 0x1a46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1a46e0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1a46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1a46e4: 0x3c01000a  lui         $at, 0xA
    ctx->pc = 0x1a46e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)10 << 16));
    // 0x1a46e8: 0xac44a488  sw          $a0, -0x5B78($v0)
    ctx->pc = 0x1a46e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943880), GPR_U32(ctx, 4));
    // 0x1a46ec: 0x34210200  ori         $at, $at, 0x200
    ctx->pc = 0x1a46ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)512);
    // 0x1a46f0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1a46f4: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x1a46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1a46f8: 0xac439bf8  sw          $v1, -0x6408($v0)
    ctx->pc = 0x1a46f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941688), GPR_U32(ctx, 3));
    // 0x1a46fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a46fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a4700: 0x612021  addu        $a0, $v1, $at
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1a4704: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a4704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4708: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a4708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a470c: 0xac44b7f0  sw          $a0, -0x4810($v0)
    ctx->pc = 0x1a470cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948848), GPR_U32(ctx, 4));
    // 0x1a4710: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x1a4710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1a4714: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a4714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4718: 0xc069168  jal         func_1A45A0
    ctx->pc = 0x1A4718u;
    SET_GPR_U32(ctx, 31, 0x1A4720u);
    ctx->pc = 0x1A471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4718u;
    // 0x1a471c: 0xac43b7e0  sw          $v1, -0x4820($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948832), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45A0u, 0x1A4718u, 0x1A4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4720u;
label_1a4720:
    // 0x1a4720: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1a4720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1a4724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4728: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x1a4728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x1a472c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A472Cu;
    SET_GPR_U32(ctx, 31, 0x1A4734u);
    ctx->pc = 0x1A4730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A472Cu;
    // 0x1a4730: 0x24060e30  addiu       $a2, $zero, 0xE30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1A472Cu, 0x1A4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4734u;
label_1a4734:
    // 0x1a4734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4738:
    // 0x1a4738: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4738u;
        // 0x1a473c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4740u;
}
