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

// Function: sub_00240310
// Address: 0x240310 - 0x240420
void sub_00240310_0x240310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240310_0x240310");
#endif

    switch (ctx->pc) {
        case 0x2403a8u: goto label_2403a8;
        default: break;
    }

    ctx->pc = 0x240310u;

    // 0x240310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x240310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x240314: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x240314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240318: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x240318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24031c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x240320: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x240320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x240324: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x240324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x240328: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x240328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24032c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x240330: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x240330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x240334: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x240334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x240338: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x240338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24033c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240340: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x240340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240344: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x240344u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x240348: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x240348u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x24034c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x24034cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x240350: 0x92150000  lbu         $s5, 0x0($s0)
    ctx->pc = 0x240350u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x240354: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x240354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x240358: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x240358u;
    {
        const bool branch_taken_0x240358 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x24035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240358u;
        // 0x24035c: 0x92160001  lbu         $s6, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240358) {
            ctx->pc = 0x2403F8u;
            goto label_2403f8;
        }
    }
    ctx->pc = 0x240360u;
    // 0x240360: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x240360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240364: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x240364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240368: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x240368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24036c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24036Cu;
    {
        const bool branch_taken_0x24036c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24036Cu;
        // 0x240370: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24036c) {
            ctx->pc = 0x240384u;
            goto label_240384;
        }
    }
    ctx->pc = 0x240374u;
    // 0x240374: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x240374u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240378: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x240378u;
    {
        const bool branch_taken_0x240378 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240378u;
        // 0x24037c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240378) {
            ctx->pc = 0x2403FCu;
            goto label_2403fc;
        }
    }
    ctx->pc = 0x240380u;
    // 0x240380: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_240384:
    // 0x240384: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x240384u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x240388: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x240388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24038c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24038Cu;
    {
        const bool branch_taken_0x24038c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24038Cu;
        // 0x240390: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24038c) {
            ctx->pc = 0x2403F8u;
            goto label_2403f8;
        }
    }
    ctx->pc = 0x240394u;
    // 0x240394: 0x8cc702c8  lw          $a3, 0x2C8($a2)
    ctx->pc = 0x240394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 712)));
    // 0x240398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24039c: 0x24c602dc  addiu       $a2, $a2, 0x2DC
    ctx->pc = 0x24039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 732));
    // 0x2403a0: 0xc091808  jal         func_246020
    ctx->pc = 0x2403A0u;
    SET_GPR_U32(ctx, 31, 0x2403A8u);
    ctx->pc = 0x2403A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2403A0u;
    // 0x2403a4: 0x30e7000f  andi        $a3, $a3, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246020u, 0x2403A0u, 0x2403A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403A8u;
label_2403a8:
    // 0x2403a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2403a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403ac: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2403acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2403b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2403B0u;
    {
        const bool branch_taken_0x2403b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2403B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403B0u;
        // 0x2403b4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403b0) {
            ctx->pc = 0x2403C8u;
            goto label_2403c8;
        }
    }
    ctx->pc = 0x2403B8u;
    // 0x2403b8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2403B8u;
    {
        const bool branch_taken_0x2403b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2403b8) {
            ctx->pc = 0x2403BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2403B8u;
            // 0x2403bc: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2403D0u;
            goto label_2403d0;
        }
    }
    ctx->pc = 0x2403C0u;
    // 0x2403c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2403C0u;
    {
        const bool branch_taken_0x2403c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403C0u;
        // 0x2403c4: 0xa2130003  sb          $s3, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403c0) {
            ctx->pc = 0x2403F8u;
            goto label_2403f8;
        }
    }
    ctx->pc = 0x2403C8u;
label_2403c8:
    // 0x2403c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2403C8u;
    {
        const bool branch_taken_0x2403c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403C8u;
        // 0x2403cc: 0x2413002f  addiu       $s3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403c8) {
            ctx->pc = 0x2403F4u;
            goto label_2403f4;
        }
    }
    ctx->pc = 0x2403D0u;
label_2403d0:
    // 0x2403d0: 0x2413002d  addiu       $s3, $zero, 0x2D
    ctx->pc = 0x2403d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2403d4: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x2403d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x2403d8: 0xa2160001  sb          $s6, 0x1($s0)
    ctx->pc = 0x2403d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 22));
    // 0x2403dc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2403dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2403e0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2403e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2403e4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2403e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2403e8: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x2403e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2403ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2403ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2403f0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2403f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2403f4:
    // 0x2403f4: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2403f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
label_2403f8:
    // 0x2403f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2403f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2403fc:
    // 0x2403fc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2403fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x240400: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x240400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240404: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x240404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240408: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x240408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24040c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24040cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240410: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x240410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240418: 0x3e00008  jr          $ra
    ctx->pc = 0x240418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240418u;
        // 0x24041c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240420u;
}
