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

// Function: sub_002526E0
// Address: 0x2526e0 - 0x252838
void sub_002526E0_0x2526e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002526E0_0x2526e0");
#endif

    switch (ctx->pc) {
        case 0x252718u: goto label_252718;
        case 0x25274cu: goto label_25274c;
        case 0x252774u: goto label_252774;
        case 0x252798u: goto label_252798;
        case 0x2527c0u: goto label_2527c0;
        default: break;
    }

    ctx->pc = 0x2526e0u;

    // 0x2526e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2526e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2526e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2526e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2526e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2526e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2526ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2526ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2526f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2526f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2526f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526f8: 0x3c063b9a  lui         $a2, 0x3B9A
    ctx->pc = 0x2526f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15258 << 16));
    // 0x2526fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2526fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252700: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x252700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252704: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x252704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25270c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252710: 0xc08aa68  jal         func_22A9A0
    ctx->pc = 0x252710u;
    SET_GPR_U32(ctx, 31, 0x252718u);
    ctx->pc = 0x252714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252710u;
    // 0x252714: 0x34c6ca00  ori         $a2, $a2, 0xCA00 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51712);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x252710u, 0x252718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252718u;
label_252718:
    // 0x252718: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25271c: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x25271Cu;
    {
        const bool branch_taken_0x25271c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25271Cu;
        // 0x252720: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25271c) {
            ctx->pc = 0x2527F8u;
            goto label_2527f8;
        }
    }
    ctx->pc = 0x252724u;
    // 0x252724: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x252724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x252728: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x252728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25272c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25272Cu;
    {
        const bool branch_taken_0x25272c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25272Cu;
        // 0x252730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25272c) {
            ctx->pc = 0x252744u;
            goto label_252744;
        }
    }
    ctx->pc = 0x252734u;
    // 0x252734: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x252734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x252738: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x252738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x25273c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25273Cu;
    {
        const bool branch_taken_0x25273c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25273c) {
            ctx->pc = 0x252750u;
            goto label_252750;
        }
    }
    ctx->pc = 0x252744u;
label_252744:
    // 0x252744: 0xc08acea  jal         func_22B3A8
    ctx->pc = 0x252744u;
    SET_GPR_U32(ctx, 31, 0x25274Cu);
    ctx->pc = 0x252748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252744u;
    // 0x252748: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x252744u, 0x25274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25274Cu;
label_25274c:
    // 0x25274c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25274cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252750:
    // 0x252750: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x252750u;
    {
        const bool branch_taken_0x252750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252750u;
        // 0x252754: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252750) {
            ctx->pc = 0x2527F8u;
            goto label_2527f8;
        }
    }
    ctx->pc = 0x252758u;
    // 0x252758: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x252758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25275c: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x25275cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x252760: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x252760u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x252764: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x252764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x252768: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x252768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25276c: 0xc08a262  jal         func_228988
    ctx->pc = 0x25276Cu;
    SET_GPR_U32(ctx, 31, 0x252774u);
    ctx->pc = 0x252770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25276Cu;
    // 0x252770: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x25276Cu, 0x252774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252774u;
label_252774:
    // 0x252774: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x252774u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x252778: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x252778u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25277c: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x25277cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x252780: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x252780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x252784: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x252784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x252788: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x252788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x25278c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x25278cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x252790: 0xc08a262  jal         func_228988
    ctx->pc = 0x252790u;
    SET_GPR_U32(ctx, 31, 0x252798u);
    ctx->pc = 0x252794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252790u;
    // 0x252794: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x252790u, 0x252798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252798u;
label_252798:
    // 0x252798: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x252798u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25279c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x25279cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2527a0: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x2527a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x2527a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2527a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527a8: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2527a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2527ac: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x2527acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x2527b0: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x2527b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2527b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2527b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2527b8: 0xc092d7e  jal         func_24B5F8
    ctx->pc = 0x2527B8u;
    SET_GPR_U32(ctx, 31, 0x2527C0u);
    ctx->pc = 0x2527BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527B8u;
    // 0x2527bc: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x2527B8u, 0x2527C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527C0u;
label_2527c0:
    // 0x2527c0: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2527c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2527c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2527c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2527c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527cc: 0xa203000b  sb          $v1, 0xB($s0)
    ctx->pc = 0x2527ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x2527d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2527d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527d4: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x2527d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x2527d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2527d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2527dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2527dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2527e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2527e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2527e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2527e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2527e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2527ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2527ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2527f0: 0x808db58  j           func_236D60
    ctx->pc = 0x2527F0u;
    ctx->pc = 0x2527F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527F0u;
    // 0x2527f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D60u;
    sub_00236D60_0x236d60(rdram, ctx, runtime); return;
    ctx->pc = 0x2527F8u;
label_2527f8:
    // 0x2527f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2527f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2527fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2527fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x252800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252808: 0x3e00008  jr          $ra
    ctx->pc = 0x252808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252808u;
        // 0x25280c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252810u;
    // 0x252810: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x252810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x252814: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x252814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x252818: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x252818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25281c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25281cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x252820: 0xfca311d8  sd          $v1, 0x11D8($a1)
    ctx->pc = 0x252820u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4568), GPR_U64(ctx, 3));
    // 0x252824: 0x248411e8  addiu       $a0, $a0, 0x11E8
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4584));
    // 0x252828: 0xfc4311e0  sd          $v1, 0x11E0($v0)
    ctx->pc = 0x252828u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4576), GPR_U64(ctx, 3));
    // 0x25282c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25282cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252830: 0x8092e30  j           func_24B8C0
    ctx->pc = 0x252830u;
    ctx->pc = 0x252834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252830u;
    // 0x252834: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C0u;
    sub_0024B8C0_0x24b8c0(rdram, ctx, runtime); return;
    ctx->pc = 0x252838u;
}
