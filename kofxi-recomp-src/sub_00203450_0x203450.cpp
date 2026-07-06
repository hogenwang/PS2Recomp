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

// Function: sub_00203450
// Address: 0x203450 - 0x2035a8
void sub_00203450_0x203450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203450_0x203450");
#endif

    switch (ctx->pc) {
        case 0x203470u: goto label_203470;
        case 0x2034c4u: goto label_2034c4;
        case 0x2034e0u: goto label_2034e0;
        case 0x2034f8u: goto label_2034f8;
        default: break;
    }

    ctx->pc = 0x203450u;

    // 0x203450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203454: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x203454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x203458: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x203458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20345c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20345cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203460: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x203460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203464: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x203464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x203468: 0xc06f818  jal         func_1BE060
    ctx->pc = 0x203468u;
    SET_GPR_U32(ctx, 31, 0x203470u);
    ctx->pc = 0x20346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203468u;
    // 0x20346c: 0x2444f4a0  addiu       $a0, $v0, -0xB60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE060u, 0x203468u, 0x203470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203470u;
label_203470:
    // 0x203470: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x203470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x203474: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203478: 0x24842080  addiu       $a0, $a0, 0x2080
    ctx->pc = 0x203478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8320));
    // 0x20347c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203480: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x203480u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x203484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203488: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x203488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x20348c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203490: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x203490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x203494: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203494u;
    {
        const bool branch_taken_0x203494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203494u;
        // 0x203498: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203494) {
            ctx->pc = 0x2034B0u;
            goto label_2034b0;
        }
    }
    ctx->pc = 0x20349Cu;
    // 0x20349c: 0x8c622084  lw          $v0, 0x2084($v1)
    ctx->pc = 0x20349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8324)));
    // 0x2034a0: 0x1050003c  beq         $v0, $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2034A0u;
    {
        const bool branch_taken_0x2034a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A0u;
        // 0x2034a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a0) {
            ctx->pc = 0x203594u;
            goto label_203594;
        }
    }
    ctx->pc = 0x2034A8u;
    // 0x2034a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2034A8u;
    {
        const bool branch_taken_0x2034a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034a8) {
            ctx->pc = 0x2034B4u;
            goto label_2034b4;
        }
    }
    ctx->pc = 0x2034B0u;
label_2034b0:
    // 0x2034b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2034b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2034b4:
    // 0x2034b4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2034B4u;
    {
        const bool branch_taken_0x2034b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2034b4) {
            ctx->pc = 0x2034D0u;
            goto label_2034d0;
        }
    }
    ctx->pc = 0x2034BCu;
    // 0x2034bc: 0xc080e32  jal         func_2038C8
    ctx->pc = 0x2034BCu;
    SET_GPR_U32(ctx, 31, 0x2034C4u);
    ctx->pc = 0x2034C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034BCu;
    // 0x2034c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038C8u, 0x2034BCu, 0x2034C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034C4u;
label_2034c4:
    // 0x2034c4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2034C4u;
    {
        const bool branch_taken_0x2034c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034C4u;
        // 0x2034c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034c4) {
            ctx->pc = 0x203598u;
            goto label_203598;
        }
    }
    ctx->pc = 0x2034CCu;
    // 0x2034cc: 0x0  nop
    ctx->pc = 0x2034ccu;
    // NOP
label_2034d0:
    // 0x2034d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2034d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2034d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2034d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034d8: 0xc06f818  jal         func_1BE060
    ctx->pc = 0x2034D8u;
    SET_GPR_U32(ctx, 31, 0x2034E0u);
    ctx->pc = 0x2034DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034D8u;
    // 0x2034dc: 0x2484f4a8  addiu       $a0, $a0, -0xB58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE060u, 0x2034D8u, 0x2034E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034E0u;
label_2034e0:
    // 0x2034e0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2034e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2034e4: 0x3484ca00  ori         $a0, $a0, 0xCA00
    ctx->pc = 0x2034e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51712);
    // 0x2034e8: 0x9fa30000  lwu         $v1, 0x0($sp)
    ctx->pc = 0x2034e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2034ec: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2034ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2034f0: 0xc080e32  jal         func_2038C8
    ctx->pc = 0x2034F0u;
    SET_GPR_U32(ctx, 31, 0x2034F8u);
    ctx->pc = 0x2034F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034F0u;
    // 0x2034f4: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038C8u, 0x2034F0u, 0x2034F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034F8u;
label_2034f8:
    // 0x2034f8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x2034fc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2034fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x203500: 0x24070082  addiu       $a3, $zero, 0x82
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x203504: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x203504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x203508: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x203508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20350c: 0x8cc6f480  lw          $a2, -0xB80($a2)
    ctx->pc = 0x20350cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294964352)));
    // 0x203510: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x203510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203514: 0x304300c7  andi        $v1, $v0, 0xC7
    ctx->pc = 0x203514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)199);
    // 0x203518: 0x10670009  beq         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x203518u;
    {
        const bool branch_taken_0x203518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x20351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203518u;
        // 0x20351c: 0xac822088  sw          $v0, 0x2088($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203518) {
            ctx->pc = 0x203540u;
            goto label_203540;
        }
    }
    ctx->pc = 0x203520u;
    // 0x203520: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x203520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x203524: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x203524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203528: 0x8c42f490  lw          $v0, -0xB70($v0)
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964368)));
    // 0x20352c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x20352cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x203530: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x203530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x203534: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x203534u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x203538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203538u;
    {
        const bool branch_taken_0x203538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203538u;
        // 0x20353c: 0x2462f490  addiu       $v0, $v1, -0xB70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203538) {
            ctx->pc = 0x203548u;
            goto label_203548;
        }
    }
    ctx->pc = 0x203540u;
label_203540:
    // 0x203540: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x203540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x203544: 0x2462f490  addiu       $v0, $v1, -0xB70
    ctx->pc = 0x203544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964368));
label_203548:
    // 0x203548: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x203548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20354c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x203550: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x203554: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x203554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203558: 0x24849bb8  addiu       $a0, $a0, -0x6448
    ctx->pc = 0x203558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941624));
    // 0x20355c: 0x24a59bc8  addiu       $a1, $a1, -0x6438
    ctx->pc = 0x20355cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941640));
    // 0x203560: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x203560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x203564: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203568: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x203568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20356c: 0x24e79bd8  addiu       $a3, $a3, -0x6428
    ctx->pc = 0x20356cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941656));
    // 0x203570: 0x24c69bdc  addiu       $a2, $a2, -0x6424
    ctx->pc = 0x203570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941660));
    // 0x203574: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x203574u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x203578: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x203578u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x20357c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x20357cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203580: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x203580u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x203584: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x203584u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x203588: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x203588u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x20358c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x20358cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x203590: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x203590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_203594:
    // 0x203594: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x203594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203598:
    // 0x203598: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x203598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20359c: 0x3e00008  jr          $ra
    ctx->pc = 0x20359Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20359Cu;
        // 0x2035a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20359Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2035A4u;
    // 0x2035a4: 0x0  nop
    ctx->pc = 0x2035a4u;
    // NOP
    if (ctx->pc == 0x2035a4u) { ctx->pc = 0x2035a8u; }
}
