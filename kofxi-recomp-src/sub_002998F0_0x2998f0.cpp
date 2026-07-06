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

// Function: sub_002998F0
// Address: 0x2998f0 - 0x299ba8
void sub_002998F0_0x2998f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002998F0_0x2998f0");
#endif

    switch (ctx->pc) {
        case 0x299940u: goto label_299940;
        case 0x299968u: goto label_299968;
        case 0x299980u: goto label_299980;
        case 0x2999ccu: goto label_2999cc;
        case 0x299ac8u: goto label_299ac8;
        case 0x299b64u: goto label_299b64;
        case 0x299b9cu: goto label_299b9c;
        default: break;
    }

    ctx->pc = 0x2998f0u;

    // 0x2998f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2998f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2998f4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2998f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2998f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2998f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2998fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2998fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x299900: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x299900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x299908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29990c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x299910: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x299910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x299914: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x299914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x299918: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x299918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x29991c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29991cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x299920: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x299920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x299924: 0x28420038  slti        $v0, $v0, 0x38
    ctx->pc = 0x299924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x299928: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x299928u;
    {
        const bool branch_taken_0x299928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299928u;
        // 0x29992c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299928) {
            ctx->pc = 0x29996Cu;
            goto label_29996c;
        }
    }
    ctx->pc = 0x299930u;
    // 0x299930: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x299930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x299934: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299934u;
    {
        const bool branch_taken_0x299934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299934u;
        // 0x299938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299934) {
            ctx->pc = 0x299960u;
            goto label_299960;
        }
    }
    ctx->pc = 0x29993Cu;
    // 0x29993c: 0x0  nop
    ctx->pc = 0x29993cu;
    // NOP
label_299940:
    // 0x299940: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x299940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x299944: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x299944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x299948: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x299948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29994c: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x29994cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x299950: 0x0  nop
    ctx->pc = 0x299950u;
    // NOP
    // 0x299954: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x299954u;
    {
        const bool branch_taken_0x299954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299954) {
            ctx->pc = 0x299940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299940;
        }
    }
    ctx->pc = 0x29995Cu;
    // 0x29995c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299960:
    // 0x299960: 0xc0a655e  jal         func_299578
    ctx->pc = 0x299960u;
    SET_GPR_U32(ctx, 31, 0x299968u);
    ctx->pc = 0x299964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299960u;
    // 0x299964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299578u, 0x299960u, 0x299968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299968u;
label_299968:
    // 0x299968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29996c:
    // 0x29996c: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x29996cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x299970: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x299970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x299974: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x299974u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x299978: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x299978u;
    SET_GPR_U32(ctx, 31, 0x299980u);
    ctx->pc = 0x29997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299978u;
    // 0x29997c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x299978u, 0x299980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299980u;
label_299980:
    // 0x299980: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x299980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x299984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x299984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29998c: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x29998cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x299990: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x299990u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x299994: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x299994u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x299998: 0xa2020039  sb          $v0, 0x39($s0)
    ctx->pc = 0x299998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x29999c: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x29999cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x2999a0: 0xa206003b  sb          $a2, 0x3B($s0)
    ctx->pc = 0x2999a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 6));
    // 0x2999a4: 0xa2070038  sb          $a3, 0x38($s0)
    ctx->pc = 0x2999a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x2999a8: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x2999a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2999ac: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x2999acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x2999b0: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x2999b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2999b4: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x2999b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2999b8: 0xa207003c  sb          $a3, 0x3C($s0)
    ctx->pc = 0x2999b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 7));
    // 0x2999bc: 0xa202003d  sb          $v0, 0x3D($s0)
    ctx->pc = 0x2999bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 2));
    // 0x2999c0: 0xa203003e  sb          $v1, 0x3E($s0)
    ctx->pc = 0x2999c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x2999c4: 0xc0a655e  jal         func_299578
    ctx->pc = 0x2999C4u;
    SET_GPR_U32(ctx, 31, 0x2999CCu);
    ctx->pc = 0x2999C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999C4u;
    // 0x2999c8: 0xa206003f  sb          $a2, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299578u, 0x2999C4u, 0x2999CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2999CCu;
label_2999cc:
    // 0x2999cc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2999ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999d0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2999d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2999d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2999d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2999d8: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x2999d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2999dc: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x2999dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2999e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2999e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2999e4: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x2999e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2999e8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2999e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2999ec: 0x72602  srl         $a0, $a3, 24
    ctx->pc = 0x2999ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x2999f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2999f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2999f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2999f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2999f8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2999f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2999fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2999fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a00: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x299a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x299a04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a08: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x299a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x299a0c: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x299a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x299a10: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x299a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x299a14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a18: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x299a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x299a1c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x299a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x299a20: 0x72602  srl         $a0, $a3, 24
    ctx->pc = 0x299a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x299a24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a28: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x299a28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x299a2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a30: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x299a30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x299a34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a38: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x299a3c: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x299a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x299a40: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x299a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x299a44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a48: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x299a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x299a4c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x299a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x299a50: 0x72602  srl         $a0, $a3, 24
    ctx->pc = 0x299a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x299a54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a58: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x299a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x299a5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a60: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x299a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x299a64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a68: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x299a68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x299a6c: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x299a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x299a70: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x299a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x299a74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a78: 0x72602  srl         $a0, $a3, 24
    ctx->pc = 0x299a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x299a7c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x299a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x299a80: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x299a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x299a84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299a88: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x299a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x299a8c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x299a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x299a90: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x299a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x299a94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x299A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A9Cu;
        // 0x299aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299AA4u;
    // 0x299aa4: 0x0  nop
    ctx->pc = 0x299aa4u;
    // NOP
    // 0x299aa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x299aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x299aac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x299aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ab0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x299ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x299ab4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x299ab4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ab8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x299ab8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299abc: 0x27aa000c  addiu       $t2, $sp, 0xC
    ctx->pc = 0x299abcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x299ac0: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x299ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x299ac4: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x299ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_299ac8:
    // 0x299ac8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x299ac8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x299acc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x299accu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x299ad0: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x299ad0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x299ad4: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x299ad4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x299ad8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x299ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x299adc: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x299adcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x299ae0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x299ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x299ae4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x299ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x299ae8: 0x9105000d  lbu         $a1, 0xD($t0)
    ctx->pc = 0x299ae8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x299aec: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x299aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x299af0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x299af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x299af4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x299af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x299af8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x299af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x299afc: 0xad46fff4  sw          $a2, -0xC($t2)
    ctx->pc = 0x299afcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294967284), GPR_U32(ctx, 6));
    // 0x299b00: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x299b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x299b04: 0x90e60003  lbu         $a2, 0x3($a3)
    ctx->pc = 0x299b04u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x299b08: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x299b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x299b0c: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x299b0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x299b10: 0x90e40006  lbu         $a0, 0x6($a3)
    ctx->pc = 0x299b10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x299b14: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x299b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x299b18: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x299b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x299b1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x299b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x299b20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x299b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x299b24: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x299b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x299b28: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x299b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x299b2c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x299b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x299b30: 0x90e60007  lbu         $a2, 0x7($a3)
    ctx->pc = 0x299b30u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x299b34: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x299b34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x299b38: 0x90e30009  lbu         $v1, 0x9($a3)
    ctx->pc = 0x299b38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x299b3c: 0x90e4000a  lbu         $a0, 0xA($a3)
    ctx->pc = 0x299b3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x299b40: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x299b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x299b44: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x299b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x299b48: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x299b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x299b4c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x299b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x299b50: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x299b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x299b54: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x299b54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x299b58: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x299b58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x299b5c: 0x90e6000b  lbu         $a2, 0xB($a3)
    ctx->pc = 0x299b5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x299b60: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x299b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_299b64:
    // 0x299b64: 0x90e2000d  lbu         $v0, 0xD($a3)
    ctx->pc = 0x299b64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x299b68: 0x90e3000e  lbu         $v1, 0xE($a3)
    ctx->pc = 0x299b68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x299b6c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x299b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x299b70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x299b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x299b74: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x299b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x299b78: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x299b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x299b7c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x299b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x299b80: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x299b80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x299b84: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x299b84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x299b88: 0x1560ffcf  bnez        $t3, . + 4 + (-0x31 << 2)
    ctx->pc = 0x299B88u;
    {
        const bool branch_taken_0x299b88 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x299B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B88u;
        // 0x299b8c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b88) {
            ctx->pc = 0x299AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299ac8;
        }
    }
    ctx->pc = 0x299B90u;
    // 0x299b90: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x299b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b94: 0xc0a655e  jal         func_299578
    ctx->pc = 0x299B94u;
    SET_GPR_U32(ctx, 31, 0x299B9Cu);
    ctx->pc = 0x299B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B94u;
    // 0x299b98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299578u, 0x299B94u, 0x299B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B9Cu;
label_299b9c:
    // 0x299b9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x299b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x299BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BA0u;
        // 0x299ba4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299BA8u;
}
