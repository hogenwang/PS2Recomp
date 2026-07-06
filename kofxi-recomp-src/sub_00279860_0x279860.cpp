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

// Function: sub_00279860
// Address: 0x279860 - 0x279be0
void sub_00279860_0x279860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279860_0x279860");
#endif

    switch (ctx->pc) {
        case 0x2798a0u: goto label_2798a0;
        case 0x2798e8u: goto label_2798e8;
        case 0x279940u: goto label_279940;
        case 0x279954u: goto label_279954;
        case 0x279998u: goto label_279998;
        case 0x2799c8u: goto label_2799c8;
        case 0x279a18u: goto label_279a18;
        case 0x279ae8u: goto label_279ae8;
        case 0x279b10u: goto label_279b10;
        case 0x279b98u: goto label_279b98;
        default: break;
    }

    ctx->pc = 0x279860u;

    // 0x279860: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x279860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x279864: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x279864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x279868: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x279868u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x27986c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27986cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279870: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x279870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x279874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x279874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279878: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x279878u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x27987c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27987cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x279880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x279884: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x279884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279888: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x279888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27988c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27988cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x279890: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x279890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x279894: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x279894u;
    {
        const bool branch_taken_0x279894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x279898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279894u;
        // 0x279898: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279894) {
            ctx->pc = 0x2798BCu;
            goto label_2798bc;
        }
    }
    ctx->pc = 0x27989Cu;
    // 0x27989c: 0x0  nop
    ctx->pc = 0x27989cu;
    // NOP
label_2798a0:
    // 0x2798a0: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x2798a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2798a4: 0x0  nop
    ctx->pc = 0x2798a4u;
    // NOP
    // 0x2798a8: 0x0  nop
    ctx->pc = 0x2798a8u;
    // NOP
    // 0x2798ac: 0x0  nop
    ctx->pc = 0x2798acu;
    // NOP
    // 0x2798b0: 0x0  nop
    ctx->pc = 0x2798b0u;
    // NOP
    // 0x2798b4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2798B4u;
    {
        const bool branch_taken_0x2798b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2798B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798B4u;
        // 0x2798b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798b4) {
            ctx->pc = 0x2798A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2798a0;
        }
    }
    ctx->pc = 0x2798BCu;
label_2798bc:
    // 0x2798bc: 0x3c1501c3  lui         $s5, 0x1C3
    ctx->pc = 0x2798bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)451 << 16));
    // 0x2798c0: 0x119880  sll         $s3, $s1, 2
    ctx->pc = 0x2798c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2798c4: 0x8ea253ac  lw          $v0, 0x53AC($s5)
    ctx->pc = 0x2798c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21420)));
    // 0x2798c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2798c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2798cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2798ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2798d0: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x2798D0u;
    {
        const bool branch_taken_0x2798d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2798D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798D0u;
        // 0x2798d4: 0x8ea253ac  lw          $v0, 0x53AC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798d0) {
            ctx->pc = 0x279AD0u;
            goto label_279ad0;
        }
    }
    ctx->pc = 0x2798D8u;
    // 0x2798d8: 0x3c1401c3  lui         $s4, 0x1C3
    ctx->pc = 0x2798d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)451 << 16));
    // 0x2798dc: 0x2690538c  addiu       $s0, $s4, 0x538C
    ctx->pc = 0x2798dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 21388));
    // 0x2798e0: 0xc09e594  jal         func_279650
    ctx->pc = 0x2798E0u;
    SET_GPR_U32(ctx, 31, 0x2798E8u);
    ctx->pc = 0x2798E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798E0u;
    // 0x2798e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279650u, 0x2798E0u, 0x2798E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798E8u;
label_2798e8:
    // 0x2798e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2798e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798ec: 0x12400075  beqz        $s2, . + 4 + (0x75 << 2)
    ctx->pc = 0x2798ECu;
    {
        const bool branch_taken_0x2798ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798ECu;
        // 0x2798f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798ec) {
            ctx->pc = 0x279AC4u;
            goto label_279ac4;
        }
    }
    ctx->pc = 0x2798F4u;
    // 0x2798f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2798f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2798f8: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x2798f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x2798fc: 0x248453fc  addiu       $a0, $a0, 0x53FC
    ctx->pc = 0x2798fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21500));
    // 0x279900: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279904: 0x2261006  srlv        $v0, $a2, $s1
    ctx->pc = 0x279904u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
    // 0x279908: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x279908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27990c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x27990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x279910: 0x2252804  sllv        $a1, $a1, $s1
    ctx->pc = 0x279910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x279914: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x279914u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x279918: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x279918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27991c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27991cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279920: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x279920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x279924: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x279924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x279928: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x279928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x27992c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x27992cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x279930: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279930u;
    {
        const bool branch_taken_0x279930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279930u;
        // 0x279934: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279930) {
            ctx->pc = 0x279960u;
            goto label_279960;
        }
    }
    ctx->pc = 0x279938u;
    // 0x279938: 0xc09e6f8  jal         func_279BE0
    ctx->pc = 0x279938u;
    SET_GPR_U32(ctx, 31, 0x279940u);
    ctx->pc = 0x27993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279938u;
    // 0x27993c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279BE0u, 0x279938u, 0x279940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279940u;
label_279940:
    // 0x279940: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x279940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279944: 0x55000007  bnel        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x279944u;
    {
        const bool branch_taken_0x279944 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x279944) {
            ctx->pc = 0x279948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279944u;
            // 0x279948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279964u;
            goto label_279964;
        }
    }
    ctx->pc = 0x27994Cu;
    // 0x27994c: 0xc09e920  jal         func_27A480
    ctx->pc = 0x27994Cu;
    SET_GPR_U32(ctx, 31, 0x279954u);
    ctx->pc = 0x279950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27994Cu;
    // 0x279950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A480u, 0x27994Cu, 0x279954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279954u;
label_279954:
    // 0x279954: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x279954u;
    {
        const bool branch_taken_0x279954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279954u;
        // 0x279958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279954) {
            ctx->pc = 0x279AC4u;
            goto label_279ac4;
        }
    }
    ctx->pc = 0x27995Cu;
    // 0x27995c: 0x0  nop
    ctx->pc = 0x27995cu;
    // NOP
label_279960:
    // 0x279960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279964:
    // 0x279964: 0xa511000a  sh          $s1, 0xA($t0)
    ctx->pc = 0x279964u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x279968: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x279968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x27996c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27996cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279970: 0xa5020008  sh          $v0, 0x8($t0)
    ctx->pc = 0x279970u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x279974: 0x8e83538c  lw          $v1, 0x538C($s4)
    ctx->pc = 0x279974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21388)));
    // 0x279978: 0xad120004  sw          $s2, 0x4($t0)
    ctx->pc = 0x279978u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 18));
    // 0x27997c: 0x2231806  srlv        $v1, $v1, $s1
    ctx->pc = 0x27997cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x279980: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x279980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x279984: 0xa503000e  sh          $v1, 0xE($t0)
    ctx->pc = 0x279984u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x279988: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x279988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x27998c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27998Cu;
    {
        const bool branch_taken_0x27998c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27998Cu;
        // 0x279990: 0xa503000c  sh          $v1, 0xC($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27998c) {
            ctx->pc = 0x2799B8u;
            goto label_2799b8;
        }
    }
    ctx->pc = 0x279994u;
    // 0x279994: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x279994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_279998:
    // 0x279998: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x279998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x27999c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2799a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2799a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2799a4: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x2799a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2799a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2799a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2799ac: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x2799acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2799b0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2799B0u;
    {
        const bool branch_taken_0x2799b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2799B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799B0u;
        // 0x2799b4: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799b0) {
            ctx->pc = 0x279998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279998;
        }
    }
    ctx->pc = 0x2799B8u;
label_2799b8:
    // 0x2799b8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2799b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2799bc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2799BCu;
    {
        const bool branch_taken_0x2799bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2799bc) {
            ctx->pc = 0x2799C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2799BCu;
            // 0x2799c0: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2799FCu;
            goto label_2799fc;
        }
    }
    ctx->pc = 0x2799C4u;
    // 0x2799c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2799c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2799c8:
    // 0x2799c8: 0x61942  srl         $v1, $a2, 5
    ctx->pc = 0x2799c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2799cc: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x2799ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x2799d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2799d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2799d4: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2799d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2799d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2799d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2799dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2799dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2799e0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2799e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2799e4: 0xc7282a  slt         $a1, $a2, $a3
    ctx->pc = 0x2799e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2799e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2799e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2799ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2799ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2799f0: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2799F0u;
    {
        const bool branch_taken_0x2799f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2799F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799F0u;
        // 0x2799f4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799f0) {
            ctx->pc = 0x2799C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2799c8;
        }
    }
    ctx->pc = 0x2799F8u;
    // 0x2799f8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2799f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_2799fc:
    // 0x2799fc: 0x5502001c  bnel        $t0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2799FCu;
    {
        const bool branch_taken_0x2799fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2799fc) {
            ctx->pc = 0x279A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2799FCu;
            // 0x279a00: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279A70u;
            goto label_279a70;
        }
    }
    ctx->pc = 0x279A04u;
    // 0x279a04: 0x1a000019  blez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x279A04u;
    {
        const bool branch_taken_0x279a04 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x279A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A04u;
        // 0x279a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a04) {
            ctx->pc = 0x279A6Cu;
            goto label_279a6c;
        }
    }
    ctx->pc = 0x279A0Cu;
    // 0x279a0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279a10: 0x2253804  sllv        $a3, $a1, $s1
    ctx->pc = 0x279a10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x279a14: 0x0  nop
    ctx->pc = 0x279a14u;
    // NOP
label_279a18:
    // 0x279a18: 0x61942  srl         $v1, $a2, 5
    ctx->pc = 0x279a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x279a1c: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x279a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x279a20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x279a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279a24: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x279a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x279a28: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x279a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x279a2c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x279a2cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x279a30: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x279a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x279a34: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x279a34u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x279a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279a3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x279a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x279a40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x279a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x279a44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x279a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x279a48: 0x9504000c  lhu         $a0, 0xC($t0)
    ctx->pc = 0x279a48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x279a4c: 0x9502000e  lhu         $v0, 0xE($t0)
    ctx->pc = 0x279a4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x279a50: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x279a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x279a54: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x279a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x279a58: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x279a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x279a5c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x279a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x279a60: 0xa504000c  sh          $a0, 0xC($t0)
    ctx->pc = 0x279a60u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x279a64: 0x1e00ffec  bgtz        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x279A64u;
    {
        const bool branch_taken_0x279a64 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x279A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A64u;
        // 0x279a68: 0xa502000e  sh          $v0, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a64) {
            ctx->pc = 0x279A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279a18;
        }
    }
    ctx->pc = 0x279A6Cu;
label_279a6c:
    // 0x279a6c: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x279a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
label_279a70:
    // 0x279a70: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x279a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x279a74: 0x8c4353a0  lw          $v1, 0x53A0($v0)
    ctx->pc = 0x279a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21408)));
    // 0x279a78: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x279a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x279a7c: 0x8c875390  lw          $a3, 0x5390($a0)
    ctx->pc = 0x279a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21392)));
    // 0x279a80: 0x26a553ac  addiu       $a1, $s5, 0x53AC
    ctx->pc = 0x279a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 21420));
    // 0x279a84: 0x8cc253a4  lw          $v0, 0x53A4($a2)
    ctx->pc = 0x279a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 21412)));
    // 0x279a88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x279a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279a8c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x279a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x279a90: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x279a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279a94: 0xe31806  srlv        $v1, $v1, $a3
    ctx->pc = 0x279a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x279a98: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x279a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279a9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x279a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279aa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279aa4: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x279aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x279aa8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x279aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279aac: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x279aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x279ab0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x279ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279ab4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x279ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x279ab8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x279ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279abc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x279abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x279ac0: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x279ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_279ac4:
    // 0x279ac4: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x279AC4u;
    {
        const bool branch_taken_0x279ac4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x279AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AC4u;
        // 0x279ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ac4) {
            ctx->pc = 0x279BB8u;
            goto label_279bb8;
        }
    }
    ctx->pc = 0x279ACCu;
    // 0x279acc: 0x8ea253ac  lw          $v0, 0x53AC($s5)
    ctx->pc = 0x279accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21420)));
label_279ad0:
    // 0x279ad0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x279ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x279ad4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x279ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279ad8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x279ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x279adc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x279adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279ae0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x279AE0u;
    {
        const bool branch_taken_0x279ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AE0u;
        // 0x279ae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ae0) {
            ctx->pc = 0x279B04u;
            goto label_279b04;
        }
    }
    ctx->pc = 0x279AE8u;
label_279ae8:
    // 0x279ae8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x279ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x279aec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x279aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279af0: 0x0  nop
    ctx->pc = 0x279af0u;
    // NOP
    // 0x279af4: 0x0  nop
    ctx->pc = 0x279af4u;
    // NOP
    // 0x279af8: 0x0  nop
    ctx->pc = 0x279af8u;
    // NOP
    // 0x279afc: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279AFCu;
    {
        const bool branch_taken_0x279afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AFCu;
        // 0x279b00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279afc) {
            ctx->pc = 0x279AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279ae8;
        }
    }
    ctx->pc = 0x279B04u;
label_279b04:
    // 0x279b04: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x279b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x279b08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x279B08u;
    {
        const bool branch_taken_0x279b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B08u;
        // 0x279b0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b08) {
            ctx->pc = 0x279B2Cu;
            goto label_279b2c;
        }
    }
    ctx->pc = 0x279B10u;
label_279b10:
    // 0x279b10: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x279b10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x279b14: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x279b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x279b18: 0x0  nop
    ctx->pc = 0x279b18u;
    // NOP
    // 0x279b1c: 0x0  nop
    ctx->pc = 0x279b1cu;
    // NOP
    // 0x279b20: 0x0  nop
    ctx->pc = 0x279b20u;
    // NOP
    // 0x279b24: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279B24u;
    {
        const bool branch_taken_0x279b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B24u;
        // 0x279b28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b24) {
            ctx->pc = 0x279B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279b10;
        }
    }
    ctx->pc = 0x279B2Cu;
label_279b2c:
    // 0x279b2c: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x279b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x279b30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x279b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x279b34: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x279b34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x279b38: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x279b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x279b3c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x279b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x279b40: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x279b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x279b44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x279B44u;
    {
        const bool branch_taken_0x279b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B44u;
        // 0x279b48: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b44) {
            ctx->pc = 0x279B60u;
            goto label_279b60;
        }
    }
    ctx->pc = 0x279B4Cu;
    // 0x279b4c: 0x8ea253ac  lw          $v0, 0x53AC($s5)
    ctx->pc = 0x279b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21420)));
    // 0x279b50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x279b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279b54: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x279b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x279b58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x279b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x279b5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x279b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_279b60:
    // 0x279b60: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x279b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x279b64: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x279b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279b68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x279b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x279b6c: 0x8c6453e4  lw          $a0, 0x53E4($v1)
    ctx->pc = 0x279b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21476)));
    // 0x279b70: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x279b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x279b74: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x279b74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x279b78: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x279b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279b7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x279B7Cu;
    {
        const bool branch_taken_0x279b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B7Cu;
        // 0x279b80: 0x718804  sllv        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b7c) {
            ctx->pc = 0x279B98u;
            goto label_279b98;
        }
    }
    ctx->pc = 0x279B84u;
    // 0x279b84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x279b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x279b88: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x279b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x279b8c: 0x96060008  lhu         $a2, 0x8($s0)
    ctx->pc = 0x279b8cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279b90: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x279B90u;
    SET_GPR_U32(ctx, 31, 0x279B98u);
    ctx->pc = 0x279B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B90u;
    // 0x279b94: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x279B90u, 0x279B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B98u;
label_279b98:
    // 0x279b98: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x279b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279b9c: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x279b9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279ba0: 0x246353fc  addiu       $v1, $v1, 0x53FC
    ctx->pc = 0x279ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21500));
    // 0x279ba4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279ba8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x279ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x279bac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x279bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x279bb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x279bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x279bb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x279bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_279bb8:
    // 0x279bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x279bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279bc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x279bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x279bc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x279bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279bcc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x279bccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x279bd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x279bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x279BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BD4u;
        // 0x279bd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279BDCu;
    // 0x279bdc: 0x0  nop
    ctx->pc = 0x279bdcu;
    // NOP
}
