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

// Function: sub_00126890
// Address: 0x126890 - 0x126f78
void sub_00126890_0x126890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126890_0x126890");
#endif

    switch (ctx->pc) {
        case 0x1268c4u: goto label_1268c4;
        case 0x1268ccu: goto label_1268cc;
        case 0x126914u: goto label_126914;
        case 0x12691cu: goto label_12691c;
        case 0x126924u: goto label_126924;
        case 0x126928u: goto label_126928;
        case 0x12694cu: goto label_12694c;
        case 0x126980u: goto label_126980;
        case 0x1269d0u: goto label_1269d0;
        case 0x126a40u: goto label_126a40;
        case 0x126a98u: goto label_126a98;
        case 0x126accu: goto label_126acc;
        case 0x126adcu: goto label_126adc;
        case 0x126aecu: goto label_126aec;
        case 0x126b6cu: goto label_126b6c;
        case 0x126b84u: goto label_126b84;
        case 0x126ba8u: goto label_126ba8;
        case 0x126bfcu: goto label_126bfc;
        case 0x126c30u: goto label_126c30;
        case 0x126c54u: goto label_126c54;
        case 0x126c84u: goto label_126c84;
        case 0x126d0cu: goto label_126d0c;
        case 0x126d80u: goto label_126d80;
        case 0x126dc4u: goto label_126dc4;
        case 0x126decu: goto label_126dec;
        case 0x126e8cu: goto label_126e8c;
        case 0x126eb0u: goto label_126eb0;
        default: break;
    }

    ctx->pc = 0x126890u;

    // 0x126890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126894: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x126894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x126898: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12689c: 0x2caf001f  sltiu       $t7, $a1, 0x1F
    ctx->pc = 0x12689cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1268a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1268a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1268a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1268a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1268a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1268a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1268ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1268acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1268b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1268b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1268b4: 0x15e001ae  bnez        $t7, . + 4 + (0x1AE << 2)
    ctx->pc = 0x1268B4u;
    {
        const bool branch_taken_0x1268b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268B4u;
        // 0x1268b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268b4) {
            ctx->pc = 0x126F70u;
            goto label_126f70;
        }
    }
    ctx->pc = 0x1268BCu;
    // 0x1268bc: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x1268bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1268c0: 0xaf8824  and         $s1, $a1, $t7
    ctx->pc = 0x1268c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
label_1268c4:
    // 0x1268c4: 0xc049ce6  jal         func_127398
    ctx->pc = 0x1268C4u;
    SET_GPR_U32(ctx, 31, 0x1268CCu);
    ctx->pc = 0x1268C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268C4u;
    // 0x1268c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127398u, 0x1268C4u, 0x1268CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268CCu;
label_1268cc:
    // 0x1268cc: 0x2e2f01f8  sltiu       $t7, $s1, 0x1F8
    ctx->pc = 0x1268ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x1268d0: 0x11e00167  beqz        $t7, . + 4 + (0x167 << 2)
    ctx->pc = 0x1268D0u;
    {
        const bool branch_taken_0x1268d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268D0u;
        // 0x1268d4: 0x3c140036  lui         $s4, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268d0) {
            ctx->pc = 0x126E70u;
            goto label_126e70;
        }
    }
    ctx->pc = 0x1268D8u;
    // 0x1268d8: 0x268fbdf8  addiu       $t7, $s4, -0x4208
    ctx->pc = 0x1268d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
    // 0x1268dc: 0x22f6021  addu        $t4, $s1, $t7
    ctx->pc = 0x1268dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x1268e0: 0x8d90000c  lw          $s0, 0xC($t4)
    ctx->pc = 0x1268e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1268e4: 0x120c0018  beq         $s0, $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1268E4u;
    {
        const bool branch_taken_0x1268e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x1268E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268E4u;
        // 0x1268e8: 0x1140c2  srl         $t0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268e4) {
            ctx->pc = 0x126948u;
            goto label_126948;
        }
    }
    ctx->pc = 0x1268ECu;
    // 0x1268ec: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1268ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1268f0: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x1268f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1268f4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1268f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1268f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1268f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268fc: 0x1cf5024  and         $t2, $t6, $t7
    ctx->pc = 0x1268fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x126900: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126904: 0x20a7021  addu        $t6, $s0, $t2
    ctx->pc = 0x126904u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x126908: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x126908u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x12690c: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x12690cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x126910: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x126910u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
label_126914:
    // 0x126914: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x126914u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x126918: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x126918u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
label_12691c:
    // 0x12691c: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x12691Cu;
    SET_GPR_U32(ctx, 31, 0x126924u);
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x12691Cu, 0x126924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126924u;
label_126924:
    // 0x126924: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x126924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_126928:
    // 0x126928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12692c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12692cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126930: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126934: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126938: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x126938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12693c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12693cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126940: 0x3e00008  jr          $ra
    ctx->pc = 0x126940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126940u;
        // 0x126944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126948u;
label_126948:
    // 0x126948: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x126948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_12694c:
    // 0x12694c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12694cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x126950: 0x25efbe00  addiu       $t7, $t7, -0x4200
    ctx->pc = 0x126950u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950400));
    // 0x126954: 0x8df00008  lw          $s0, 0x8($t7)
    ctx->pc = 0x126954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x126958: 0x120f003a  beq         $s0, $t7, . + 4 + (0x3A << 2)
    ctx->pc = 0x126958u;
    {
        const bool branch_taken_0x126958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x12695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126958u;
        // 0x12695c: 0x240efffc  addiu       $t6, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126958) {
            ctx->pc = 0x126A44u;
            goto label_126a44;
        }
    }
    ctx->pc = 0x126960u;
    // 0x126960: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x126960u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x126964: 0x1ee5024  and         $t2, $t7, $t6
    ctx->pc = 0x126964u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x126968: 0x151682b  sltu        $t5, $t2, $s1
    ctx->pc = 0x126968u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12696c: 0x11a0013c  beqz        $t5, . + 4 + (0x13C << 2)
    ctx->pc = 0x12696Cu;
    {
        const bool branch_taken_0x12696c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x126970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12696Cu;
        // 0x126970: 0x22a7823  subu        $t7, $s1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12696c) {
            ctx->pc = 0x126E60u;
            goto label_126e60;
        }
    }
    ctx->pc = 0x126974u;
    // 0x126974: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126974u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126978: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x126978u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12697c: 0xf582f  dsubu       $t3, $zero, $t7
    ctx->pc = 0x12697cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 15));
label_126980:
    // 0x126980: 0x296f0010  slti        $t7, $t3, 0x10
    ctx->pc = 0x126980u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x126984: 0x15e00014  bnez        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x126984u;
    {
        const bool branch_taken_0x126984 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126984u;
        // 0x126988: 0x3c0f0036  lui         $t7, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126984) {
            ctx->pc = 0x1269D8u;
            goto label_1269d8;
        }
    }
    ctx->pc = 0x12698Cu;
    // 0x12698c: 0x362f0001  ori         $t7, $s1, 0x1
    ctx->pc = 0x12698cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x126990: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x126990u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x126994: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x126994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x126998: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x126998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12699c: 0x25cebe00  addiu       $t6, $t6, -0x4200
    ctx->pc = 0x12699cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950400));
    // 0x1269a0: 0xb603c  dsll32      $t4, $t3, 0
    ctx->pc = 0x1269a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1269a4: 0x356f0001  ori         $t7, $t3, 0x1
    ctx->pc = 0x1269a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x1269a8: 0xadc50008  sw          $a1, 0x8($t6)
    ctx->pc = 0x1269a8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 5));
    // 0x1269ac: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1269acu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1269b0: 0xadc5000c  sw          $a1, 0xC($t6)
    ctx->pc = 0x1269b0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 5));
    // 0x1269b4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1269b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1269b8: 0xacae0008  sw          $t6, 0x8($a1)
    ctx->pc = 0x1269b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 14));
    // 0x1269bc: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1269bcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x1269c0: 0xac6821  addu        $t5, $a1, $t4
    ctx->pc = 0x1269c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1269c4: 0xacaf0004  sw          $t7, 0x4($a1)
    ctx->pc = 0x1269c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 15));
    // 0x1269c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1269c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269cc: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x1269ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
label_1269d0:
    // 0x1269d0: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1269D0u;
    {
        const bool branch_taken_0x1269d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269D0u;
        // 0x1269d4: 0xacae000c  sw          $t6, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269d0) {
            ctx->pc = 0x12691Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12691c;
        }
    }
    ctx->pc = 0x1269D8u;
label_1269d8:
    // 0x1269d8: 0x25edbe00  addiu       $t5, $t7, -0x4200
    ctx->pc = 0x1269d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950400));
    // 0x1269dc: 0xadad000c  sw          $t5, 0xC($t5)
    ctx->pc = 0x1269dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 13));
    // 0x1269e0: 0x5600005  bltz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1269E0u;
    {
        const bool branch_taken_0x1269e0 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x1269E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269E0u;
        // 0x1269e4: 0xadad0008  sw          $t5, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269e0) {
            ctx->pc = 0x1269F8u;
            goto label_1269f8;
        }
    }
    ctx->pc = 0x1269E8u;
    // 0x1269e8: 0x20a7021  addu        $t6, $s0, $t2
    ctx->pc = 0x1269e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1269ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1269ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269f0: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1269F0u;
    {
        const bool branch_taken_0x1269f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269F0u;
        // 0x1269f4: 0x8dcf0004  lw          $t7, 0x4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269f0) {
            ctx->pc = 0x126914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126914;
        }
    }
    ctx->pc = 0x1269F8u;
label_1269f8:
    // 0x1269f8: 0x2d4f0200  sltiu       $t7, $t2, 0x200
    ctx->pc = 0x1269f8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1269fc: 0x11e000da  beqz        $t7, . + 4 + (0xDA << 2)
    ctx->pc = 0x1269FCu;
    {
        const bool branch_taken_0x1269fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269FCu;
        // 0x126a00: 0xa60c2  srl         $t4, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269fc) {
            ctx->pc = 0x126D68u;
            goto label_126d68;
        }
    }
    ctx->pc = 0x126A04u;
    // 0x126a04: 0x25adfff8  addiu       $t5, $t5, -0x8
    ctx->pc = 0x126a04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
    // 0x126a08: 0xc78c0  sll         $t7, $t4, 3
    ctx->pc = 0x126a08u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x126a0c: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x126a0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x126a10: 0x1ed3821  addu        $a3, $t7, $t5
    ctx->pc = 0x126a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x126a14: 0xc6082  srl         $t4, $t4, 2
    ctx->pc = 0x126a14u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 2));
    // 0x126a18: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x126a18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a1c: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x126a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x126a20: 0x18f7814  dsllv       $t7, $t7, $t4
    ctx->pc = 0x126a20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x126a24: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x126a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x126a28: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126a28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126a2c: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x126a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x126a30: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x126a30u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x126a34: 0xad30000c  sw          $s0, 0xC($t1)
    ctx->pc = 0x126a34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 16));
    // 0x126a38: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x126a38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x126a3c: 0xadae0004  sw          $t6, 0x4($t5)
    ctx->pc = 0x126a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 14));
label_126a40:
    // 0x126a40: 0xacf00008  sw          $s0, 0x8($a3)
    ctx->pc = 0x126a40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 16));
label_126a44:
    // 0x126a44: 0x290f0000  slti        $t7, $t0, 0x0
    ctx->pc = 0x126a44u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x126a48: 0x250d0003  addiu       $t5, $t0, 0x3
    ctx->pc = 0x126a48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x126a4c: 0x10f680a  movz        $t5, $t0, $t7
    ctx->pc = 0x126a4cu;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 8));
    // 0x126a50: 0x268ebdf8  addiu       $t6, $s4, -0x4208
    ctx->pc = 0x126a50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
    // 0x126a54: 0xd6883  sra         $t5, $t5, 2
    ctx->pc = 0x126a54u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 2));
    // 0x126a58: 0x9dcc0004  lwu         $t4, 0x4($t6)
    ctx->pc = 0x126a58u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x126a5c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x126a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a60: 0x1af4814  dsllv       $t1, $t7, $t5
    ctx->pc = 0x126a60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x126a64: 0x189702b  sltu        $t6, $t4, $t1
    ctx->pc = 0x126a64u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x126a68: 0x15c0005a  bnez        $t6, . + 4 + (0x5A << 2)
    ctx->pc = 0x126A68u;
    {
        const bool branch_taken_0x126a68 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A68u;
        // 0x126a6c: 0x268fbdf8  addiu       $t7, $s4, -0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a68) {
            ctx->pc = 0x126BD4u;
            goto label_126bd4;
        }
    }
    ctx->pc = 0x126A70u;
    // 0x126a70: 0x12c7824  and         $t7, $t1, $t4
    ctx->pc = 0x126a70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x126a74: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x126A74u;
    {
        const bool branch_taken_0x126a74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A74u;
        // 0x126a78: 0x3c0f0036  lui         $t7, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a74) {
            ctx->pc = 0x126AB8u;
            goto label_126ab8;
        }
    }
    ctx->pc = 0x126A7Cu;
    // 0x126a7c: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x126a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126a80: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x126a80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x126a84: 0x10f7824  and         $t7, $t0, $t7
    ctx->pc = 0x126a84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & GPR_U64(ctx, 15));
    // 0x126a88: 0x12c7024  and         $t6, $t1, $t4
    ctx->pc = 0x126a88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x126a8c: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x126A8Cu;
    {
        const bool branch_taken_0x126a8c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A8Cu;
        // 0x126a90: 0x25e80004  addiu       $t0, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a8c) {
            ctx->pc = 0x126AB4u;
            goto label_126ab4;
        }
    }
    ctx->pc = 0x126A94u;
    // 0x126a94: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x126a94u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_126a98:
    // 0x126a98: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x126a98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x126a9c: 0x12e7824  and         $t7, $t1, $t6
    ctx->pc = 0x126a9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x126aa0: 0x0  nop
    ctx->pc = 0x126aa0u;
    // NOP
    // 0x126aa4: 0x0  nop
    ctx->pc = 0x126aa4u;
    // NOP
    // 0x126aa8: 0x0  nop
    ctx->pc = 0x126aa8u;
    // NOP
    // 0x126aac: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126AACu;
    {
        const bool branch_taken_0x126aac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AACu;
        // 0x126ab0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126aac) {
            ctx->pc = 0x126A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126a98;
        }
    }
    ctx->pc = 0x126AB4u;
label_126ab4:
    // 0x126ab4: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x126ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_126ab8:
    // 0x126ab8: 0x25e5bdf8  addiu       $a1, $t7, -0x4208
    ctx->pc = 0x126ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950392));
    // 0x126abc: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x126abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ac0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x126ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ac4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x126ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ac8: 0x878c0  sll         $t7, $t0, 3
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_126acc:
    // 0x126acc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x126accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ad0: 0x1e56021  addu        $t4, $t7, $a1
    ctx->pc = 0x126ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x126ad4: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x126ad4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ad8: 0x8db0000c  lw          $s0, 0xC($t5)
    ctx->pc = 0x126ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
label_126adc:
    // 0x126adc: 0x120d0016  beq         $s0, $t5, . + 4 + (0x16 << 2)
    ctx->pc = 0x126ADCu;
    {
        const bool branch_taken_0x126adc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 13));
        ctx->pc = 0x126AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ADCu;
        // 0x126ae0: 0x290f003f  slti        $t7, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126adc) {
            ctx->pc = 0x126B38u;
            goto label_126b38;
        }
    }
    ctx->pc = 0x126AE4u;
    // 0x126ae4: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x126ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126ae8: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x126ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_126aec:
    // 0x126aec: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x126aecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x126af0: 0x1517823  subu        $t7, $t2, $s1
    ctx->pc = 0x126af0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x126af4: 0x22a7023  subu        $t6, $s1, $t2
    ctx->pc = 0x126af4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x126af8: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x126af8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126afc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x126afcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x126b00: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x126b04: 0x151782b  sltu        $t7, $t2, $s1
    ctx->pc = 0x126b04u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x126b08: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x126B08u;
    {
        const bool branch_taken_0x126b08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B08u;
        // 0x126b0c: 0xb583e  dsrl32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b08) {
            ctx->pc = 0x126B14u;
            goto label_126b14;
        }
    }
    ctx->pc = 0x126B10u;
    // 0x126b10: 0xe582f  dsubu       $t3, $zero, $t6
    ctx->pc = 0x126b10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 14));
label_126b14:
    // 0x126b14: 0x296f0010  slti        $t7, $t3, 0x10
    ctx->pc = 0x126b14u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x126b18: 0x51e0007e  beql        $t7, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x126B18u;
    {
        const bool branch_taken_0x126b18 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b18) {
            ctx->pc = 0x126B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B18u;
            // 0x126b1c: 0x8e090008  lw          $t1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D14u;
            goto label_126d14;
        }
    }
    ctx->pc = 0x126B20u;
    // 0x126b20: 0x5610073  bgez        $t3, . + 4 + (0x73 << 2)
    ctx->pc = 0x126B20u;
    {
        const bool branch_taken_0x126b20 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x126B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B20u;
        // 0x126b24: 0x20a7021  addu        $t6, $s0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b20) {
            ctx->pc = 0x126CF0u;
            goto label_126cf0;
        }
    }
    ctx->pc = 0x126B28u;
    // 0x126b28: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x126b28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126b2c: 0x560dffef  bnel        $s0, $t5, . + 4 + (-0x11 << 2)
    ctx->pc = 0x126B2Cu;
    {
        const bool branch_taken_0x126b2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 13));
        if (branch_taken_0x126b2c) {
            ctx->pc = 0x126B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B2Cu;
            // 0x126b30: 0x8e0f0004  lw          $t7, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126AECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126aec;
        }
    }
    ctx->pc = 0x126B34u;
    // 0x126b34: 0x290f003f  slti        $t7, $t0, 0x3F
    ctx->pc = 0x126b34u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)63) ? 1 : 0);
label_126b38:
    // 0x126b38: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126B38u;
    {
        const bool branch_taken_0x126b38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B38u;
        // 0x126b3c: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b38) {
            ctx->pc = 0x126B48u;
            goto label_126b48;
        }
    }
    ctx->pc = 0x126B40u;
    // 0x126b40: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x126b40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x126b44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x126b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_126b48:
    // 0x126b48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x126b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x126b4c: 0x310f0003  andi        $t7, $t0, 0x3
    ctx->pc = 0x126b4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x126b50: 0x55e0ffe2  bnel        $t7, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x126B50u;
    {
        const bool branch_taken_0x126b50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b50) {
            ctx->pc = 0x126B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B50u;
            // 0x126b54: 0x8db0000c  lw          $s0, 0xC($t5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126adc;
        }
    }
    ctx->pc = 0x126B58u;
    // 0x126b58: 0x9783c  dsll32      $t7, $t1, 0
    ctx->pc = 0x126b58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) << (32 + 0));
    // 0x126b5c: 0x246dbdf8  addiu       $t5, $v1, -0x4208
    ctx->pc = 0x126b5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950392));
    // 0x126b60: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x126b60u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x126b64: 0xf7027  nor         $t6, $zero, $t7
    ctx->pc = 0x126b64u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x126b68: 0x30cf0003  andi        $t7, $a2, 0x3
    ctx->pc = 0x126b68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_126b6c:
    // 0x126b6c: 0x15e0005a  bnez        $t7, . + 4 + (0x5A << 2)
    ctx->pc = 0x126B6Cu;
    {
        const bool branch_taken_0x126b6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B6Cu;
        // 0x126b70: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b6c) {
            ctx->pc = 0x126CD8u;
            goto label_126cd8;
        }
    }
    ctx->pc = 0x126B74u;
    // 0x126b74: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x126b74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x126b78: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x126b78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x126b7c: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x126b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x126b80: 0x9c8e0004  lwu         $t6, 0x4($a0)
    ctx->pc = 0x126b80u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_126b84:
    // 0x126b84: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x126b84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x126b88: 0x1c9782b  sltu        $t7, $t6, $t1
    ctx->pc = 0x126b88u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x126b8c: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x126B8Cu;
    {
        const bool branch_taken_0x126b8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B8Cu;
        // 0x126b90: 0x268fbdf8  addiu       $t7, $s4, -0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b8c) {
            ctx->pc = 0x126BD4u;
            goto label_126bd4;
        }
    }
    ctx->pc = 0x126B94u;
    // 0x126b94: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x126B94u;
    {
        const bool branch_taken_0x126b94 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B94u;
        // 0x126b98: 0x12e7824  and         $t7, $t1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b94) {
            ctx->pc = 0x126BD0u;
            goto label_126bd0;
        }
    }
    ctx->pc = 0x126B9Cu;
    // 0x126b9c: 0x15e0ffcb  bnez        $t7, . + 4 + (-0x35 << 2)
    ctx->pc = 0x126B9Cu;
    {
        const bool branch_taken_0x126b9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B9Cu;
        // 0x126ba0: 0x878c0  sll         $t7, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b9c) {
            ctx->pc = 0x126ACCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126acc;
        }
    }
    ctx->pc = 0x126BA4u;
    // 0x126ba4: 0x9c4e0004  lwu         $t6, 0x4($v0)
    ctx->pc = 0x126ba4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_126ba8:
    // 0x126ba8: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x126ba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x126bac: 0x12e7824  and         $t7, $t1, $t6
    ctx->pc = 0x126bacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x126bb0: 0x0  nop
    ctx->pc = 0x126bb0u;
    // NOP
    // 0x126bb4: 0x0  nop
    ctx->pc = 0x126bb4u;
    // NOP
    // 0x126bb8: 0x0  nop
    ctx->pc = 0x126bb8u;
    // NOP
    // 0x126bbc: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126BBCu;
    {
        const bool branch_taken_0x126bbc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BBCu;
        // 0x126bc0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bbc) {
            ctx->pc = 0x126BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126ba8;
        }
    }
    ctx->pc = 0x126BC4u;
    // 0x126bc4: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x126BC4u;
    {
        const bool branch_taken_0x126bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BC4u;
        // 0x126bc8: 0x878c0  sll         $t7, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bc4) {
            ctx->pc = 0x126ACCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126acc;
        }
    }
    ctx->pc = 0x126BCCu;
    // 0x126bcc: 0x0  nop
    ctx->pc = 0x126bccu;
    // NOP
label_126bd0:
    // 0x126bd0: 0x268fbdf8  addiu       $t7, $s4, -0x4208
    ctx->pc = 0x126bd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
label_126bd4:
    // 0x126bd4: 0x8dee0008  lw          $t6, 0x8($t7)
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x126bd8: 0x8dcd0004  lw          $t5, 0x4($t6)
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x126bdc: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x126bdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126be0: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x126be0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x126be4: 0x1b1702b  sltu        $t6, $t5, $s1
    ctx->pc = 0x126be4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x126be8: 0x11c00037  beqz        $t6, . + 4 + (0x37 << 2)
    ctx->pc = 0x126BE8u;
    {
        const bool branch_taken_0x126be8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BE8u;
        // 0x126bec: 0x22d7823  subu        $t7, $s1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126be8) {
            ctx->pc = 0x126CC8u;
            goto label_126cc8;
        }
    }
    ctx->pc = 0x126BF0u;
    // 0x126bf0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126bf0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126bf4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x126bf4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x126bf8: 0xf582f  dsubu       $t3, $zero, $t7
    ctx->pc = 0x126bf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 15));
label_126bfc:
    // 0x126bfc: 0x2690bdf8  addiu       $s0, $s4, -0x4208
    ctx->pc = 0x126bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
    // 0x126c00: 0x2413fffc  addiu       $s3, $zero, -0x4
    ctx->pc = 0x126c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126c04: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x126c04u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126c08: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x126c08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x126c0c: 0x1f37824  and         $t7, $t7, $s3
    ctx->pc = 0x126c0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 19));
    // 0x126c10: 0x1f1782b  sltu        $t7, $t7, $s1
    ctx->pc = 0x126c10u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x126c14: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x126C14u;
    {
        const bool branch_taken_0x126c14 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C14u;
        // 0x126c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c14) {
            ctx->pc = 0x126C28u;
            goto label_126c28;
        }
    }
    ctx->pc = 0x126C1Cu;
    // 0x126c1c: 0x296f0010  slti        $t7, $t3, 0x10
    ctx->pc = 0x126c1cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x126c20: 0x11e0001a  beqz        $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x126C20u;
    {
        const bool branch_taken_0x126c20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C20u;
        // 0x126c24: 0x268cbdf8  addiu       $t4, $s4, -0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c20) {
            ctx->pc = 0x126C8Cu;
            goto label_126c8c;
        }
    }
    ctx->pc = 0x126C28u;
label_126c28:
    // 0x126c28: 0xc04998e  jal         func_126638
    ctx->pc = 0x126C28u;
    SET_GPR_U32(ctx, 31, 0x126C30u);
    ctx->pc = 0x126C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C28u;
    // 0x126c2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126638u, 0x126C28u, 0x126C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C30u;
label_126c30:
    // 0x126c30: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x126c30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126c34: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x126c34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x126c38: 0x1d37024  and         $t6, $t6, $s3
    ctx->pc = 0x126c38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x126c3c: 0x1d1782b  sltu        $t7, $t6, $s1
    ctx->pc = 0x126c3cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x126c40: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x126C40u;
    {
        const bool branch_taken_0x126c40 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C40u;
        // 0x126c44: 0x22e7823  subu        $t7, $s1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c40) {
            ctx->pc = 0x126CB8u;
            goto label_126cb8;
        }
    }
    ctx->pc = 0x126C48u;
    // 0x126c48: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126c48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126c4c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x126c4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x126c50: 0xf582f  dsubu       $t3, $zero, $t7
    ctx->pc = 0x126c50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 15));
label_126c54:
    // 0x126c54: 0x268ebdf8  addiu       $t6, $s4, -0x4208
    ctx->pc = 0x126c54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
    // 0x126c58: 0x8dcd0008  lw          $t5, 0x8($t6)
    ctx->pc = 0x126c58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x126c5c: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x126c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x126c60: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x126c60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126c64: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x126c64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x126c68: 0x1f1782b  sltu        $t7, $t7, $s1
    ctx->pc = 0x126c68u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x126c6c: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126C6Cu;
    {
        const bool branch_taken_0x126c6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C6Cu;
        // 0x126c70: 0x296f0010  slti        $t7, $t3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c6c) {
            ctx->pc = 0x126C7Cu;
            goto label_126c7c;
        }
    }
    ctx->pc = 0x126C74u;
    // 0x126c74: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x126C74u;
    {
        const bool branch_taken_0x126c74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C74u;
        // 0x126c78: 0x268cbdf8  addiu       $t4, $s4, -0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c74) {
            ctx->pc = 0x126C8Cu;
            goto label_126c8c;
        }
    }
    ctx->pc = 0x126C7Cu;
label_126c7c:
    // 0x126c7c: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x126C7Cu;
    SET_GPR_U32(ctx, 31, 0x126C84u);
    ctx->pc = 0x126C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C7Cu;
    // 0x126c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x126C7Cu, 0x126C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C84u;
label_126c84:
    // 0x126c84: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
    ctx->pc = 0x126C84u;
    {
        const bool branch_taken_0x126c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C84u;
        // 0x126c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c84) {
            ctx->pc = 0x126928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126928;
        }
    }
    ctx->pc = 0x126C8Cu;
label_126c8c:
    // 0x126c8c: 0x362d0001  ori         $t5, $s1, 0x1
    ctx->pc = 0x126c8cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x126c90: 0x8d900008  lw          $s0, 0x8($t4)
    ctx->pc = 0x126c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x126c94: 0x356e0001  ori         $t6, $t3, 0x1
    ctx->pc = 0x126c94u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x126c98: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x126c98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x126c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ca0: 0xae0d0004  sw          $t5, 0x4($s0)
    ctx->pc = 0x126ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 13));
    // 0x126ca4: 0x2117821  addu        $t7, $s0, $s1
    ctx->pc = 0x126ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x126ca8: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x126ca8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x126cac: 0xad8f0008  sw          $t7, 0x8($t4)
    ctx->pc = 0x126cacu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 15));
    // 0x126cb0: 0x1000ff1a  b           . + 4 + (-0xE6 << 2)
    ctx->pc = 0x126CB0u;
    {
        const bool branch_taken_0x126cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CB0u;
        // 0x126cb4: 0xadee0004  sw          $t6, 0x4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cb0) {
            ctx->pc = 0x12691Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12691c;
        }
    }
    ctx->pc = 0x126CB8u;
label_126cb8:
    // 0x126cb8: 0x1d17823  subu        $t7, $t6, $s1
    ctx->pc = 0x126cb8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x126cbc: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x126cbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126cc0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x126CC0u;
    {
        const bool branch_taken_0x126cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CC0u;
        // 0x126cc4: 0xb583e  dsrl32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cc0) {
            ctx->pc = 0x126C54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126c54;
        }
    }
    ctx->pc = 0x126CC8u;
label_126cc8:
    // 0x126cc8: 0x1b17823  subu        $t7, $t5, $s1
    ctx->pc = 0x126cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x126ccc: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x126cccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126cd0: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x126CD0u;
    {
        const bool branch_taken_0x126cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CD0u;
        // 0x126cd4: 0xb583e  dsrl32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cd0) {
            ctx->pc = 0x126BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126bfc;
        }
    }
    ctx->pc = 0x126CD8u;
label_126cd8:
    // 0x126cd8: 0x258cfff8  addiu       $t4, $t4, -0x8
    ctx->pc = 0x126cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
    // 0x126cdc: 0x8d8f0008  lw          $t7, 0x8($t4)
    ctx->pc = 0x126cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x126ce0: 0x11ecffa2  beq         $t7, $t4, . + 4 + (-0x5E << 2)
    ctx->pc = 0x126CE0u;
    {
        const bool branch_taken_0x126ce0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 12));
        ctx->pc = 0x126CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CE0u;
        // 0x126ce4: 0x30cf0003  andi        $t7, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ce0) {
            ctx->pc = 0x126B6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126b6c;
        }
    }
    ctx->pc = 0x126CE8u;
    // 0x126ce8: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x126CE8u;
    {
        const bool branch_taken_0x126ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CE8u;
        // 0x126cec: 0x9c8e0004  lwu         $t6, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ce8) {
            ctx->pc = 0x126B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126b84;
        }
    }
    ctx->pc = 0x126CF0u;
label_126cf0:
    // 0x126cf0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x126cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126cf4: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x126cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x126cf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cfc: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x126cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126d00: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x126d00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x126d04: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x126d04u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x126d08: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x126d08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_126d0c:
    // 0x126d0c: 0x1000ff03  b           . + 4 + (-0xFD << 2)
    ctx->pc = 0x126D0Cu;
    {
        const bool branch_taken_0x126d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D0Cu;
        // 0x126d10: 0xad27000c  sw          $a3, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d0c) {
            ctx->pc = 0x12691Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12691c;
        }
    }
    ctx->pc = 0x126D14u;
label_126d14:
    // 0x126d14: 0x362d0001  ori         $t5, $s1, 0x1
    ctx->pc = 0x126d14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x126d18: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x126d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126d1c: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x126d1cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x126d20: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x126d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x126d24: 0xae0d0004  sw          $t5, 0x4($s0)
    ctx->pc = 0x126d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 13));
    // 0x126d28: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x126d28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x126d2c: 0x25cebe00  addiu       $t6, $t6, -0x4200
    ctx->pc = 0x126d2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950400));
    // 0x126d30: 0xb603c  dsll32      $t4, $t3, 0
    ctx->pc = 0x126d30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) << (32 + 0));
    // 0x126d34: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x126d34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x126d38: 0x356f0001  ori         $t7, $t3, 0x1
    ctx->pc = 0x126d38u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x126d3c: 0xadc50008  sw          $a1, 0x8($t6)
    ctx->pc = 0x126d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 5));
    // 0x126d40: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x126d40u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x126d44: 0xadc5000c  sw          $a1, 0xC($t6)
    ctx->pc = 0x126d44u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 5));
    // 0x126d48: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126d48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126d4c: 0xacae0008  sw          $t6, 0x8($a1)
    ctx->pc = 0x126d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 14));
    // 0x126d50: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x126d50u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x126d54: 0xac6821  addu        $t5, $a1, $t4
    ctx->pc = 0x126d54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x126d58: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x126d58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x126d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d60: 0x1000ff1b  b           . + 4 + (-0xE5 << 2)
    ctx->pc = 0x126D60u;
    {
        const bool branch_taken_0x126d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D60u;
        // 0x126d64: 0xacaf0004  sw          $t7, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d60) {
            ctx->pc = 0x1269D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1269d0;
        }
    }
    ctx->pc = 0x126D68u;
label_126d68:
    // 0x126d68: 0xa7242  srl         $t6, $t2, 9
    ctx->pc = 0x126d68u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), 9));
    // 0x126d6c: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x126D6Cu;
    {
        const bool branch_taken_0x126d6c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D6Cu;
        // 0x126d70: 0x2dcf0005  sltiu       $t7, $t6, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d6c) {
            ctx->pc = 0x126D80u;
            goto label_126d80;
        }
    }
    ctx->pc = 0x126D74u;
    // 0x126d74: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x126D74u;
    {
        const bool branch_taken_0x126d74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D74u;
        // 0x126d78: 0xa7982  srl         $t7, $t2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d74) {
            ctx->pc = 0x126E10u;
            goto label_126e10;
        }
    }
    ctx->pc = 0x126D7Cu;
    // 0x126d7c: 0x25ec0038  addiu       $t4, $t7, 0x38
    ctx->pc = 0x126d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 56));
label_126d80:
    // 0x126d80: 0xc78c0  sll         $t7, $t4, 3
    ctx->pc = 0x126d80u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x126d84: 0x268bbdf8  addiu       $t3, $s4, -0x4208
    ctx->pc = 0x126d84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
    // 0x126d88: 0x1eb3821  addu        $a3, $t7, $t3
    ctx->pc = 0x126d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x126d8c: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x126d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x126d90: 0x55270010  bnel        $t1, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x126D90u;
    {
        const bool branch_taken_0x126d90 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        if (branch_taken_0x126d90) {
            ctx->pc = 0x126D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126D90u;
            // 0x126d94: 0x8d2f0004  lw          $t7, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126DD4u;
            goto label_126dd4;
        }
    }
    ctx->pc = 0x126D98u;
    // 0x126d98: 0x258e0003  addiu       $t6, $t4, 0x3
    ctx->pc = 0x126d98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x126d9c: 0x298f0000  slti        $t7, $t4, 0x0
    ctx->pc = 0x126d9cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x126da0: 0x1cf600b  movn        $t4, $t6, $t7
    ctx->pc = 0x126da0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x126da4: 0xc6883  sra         $t5, $t4, 2
    ctx->pc = 0x126da4u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 12), 2));
    // 0x126da8: 0x8d6e0004  lw          $t6, 0x4($t3)
    ctx->pc = 0x126da8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x126dac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x126dacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126db0: 0x1af7814  dsllv       $t7, $t7, $t5
    ctx->pc = 0x126db0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x126db4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126db4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126db8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x126db8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x126dbc: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x126dbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x126dc0: 0xad6e0004  sw          $t6, 0x4($t3)
    ctx->pc = 0x126dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 14));
label_126dc4:
    // 0x126dc4: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x126dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x126dc8: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x126dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x126dcc: 0x1000ff1c  b           . + 4 + (-0xE4 << 2)
    ctx->pc = 0x126DCCu;
    {
        const bool branch_taken_0x126dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DCCu;
        // 0x126dd0: 0xad30000c  sw          $s0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dcc) {
            ctx->pc = 0x126A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126a40;
        }
    }
    ctx->pc = 0x126DD4u;
label_126dd4:
    // 0x126dd4: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x126dd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126dd8: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x126dd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x126ddc: 0x14f782b  sltu        $t7, $t2, $t7
    ctx->pc = 0x126ddcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x126de0: 0x51e0fff8  beql        $t7, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x126DE0u;
    {
        const bool branch_taken_0x126de0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x126de0) {
            ctx->pc = 0x126DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126DE0u;
            // 0x126de4: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126dc4;
        }
    }
    ctx->pc = 0x126DE8u;
    // 0x126de8: 0x8d290008  lw          $t1, 0x8($t1)
    ctx->pc = 0x126de8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_126dec:
    // 0x126dec: 0x5127fff5  beql        $t1, $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x126DECu;
    {
        const bool branch_taken_0x126dec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        if (branch_taken_0x126dec) {
            ctx->pc = 0x126DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126DECu;
            // 0x126df0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126dc4;
        }
    }
    ctx->pc = 0x126DF4u;
    // 0x126df4: 0x8d2f0004  lw          $t7, 0x4($t1)
    ctx->pc = 0x126df4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x126df8: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x126df8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x126dfc: 0x14f782b  sltu        $t7, $t2, $t7
    ctx->pc = 0x126dfcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x126e00: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126E00u;
    {
        const bool branch_taken_0x126e00 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126e00) {
            ctx->pc = 0x126E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E00u;
            // 0x126e04: 0x8d290008  lw          $t1, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126dec;
        }
    }
    ctx->pc = 0x126E08u;
    // 0x126e08: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x126E08u;
    {
        const bool branch_taken_0x126e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E08u;
        // 0x126e0c: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e08) {
            ctx->pc = 0x126DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126dc4;
        }
    }
    ctx->pc = 0x126E10u;
label_126e10:
    // 0x126e10: 0x2dcf0015  sltiu       $t7, $t6, 0x15
    ctx->pc = 0x126e10u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x126e14: 0x15e0ffda  bnez        $t7, . + 4 + (-0x26 << 2)
    ctx->pc = 0x126E14u;
    {
        const bool branch_taken_0x126e14 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E14u;
        // 0x126e18: 0x25cc005b  addiu       $t4, $t6, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e14) {
            ctx->pc = 0x126D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126d80;
        }
    }
    ctx->pc = 0x126E1Cu;
    // 0x126e1c: 0x2dcf0055  sltiu       $t7, $t6, 0x55
    ctx->pc = 0x126e1cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x126e20: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126E20u;
    {
        const bool branch_taken_0x126e20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E20u;
        // 0x126e24: 0xa7b02  srl         $t7, $t2, 12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e20) {
            ctx->pc = 0x126E30u;
            goto label_126e30;
        }
    }
    ctx->pc = 0x126E28u;
    // 0x126e28: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x126E28u;
    {
        const bool branch_taken_0x126e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E28u;
        // 0x126e2c: 0x25ec006e  addiu       $t4, $t7, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e28) {
            ctx->pc = 0x126D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126d80;
        }
    }
    ctx->pc = 0x126E30u;
label_126e30:
    // 0x126e30: 0x2dcf0155  sltiu       $t7, $t6, 0x155
    ctx->pc = 0x126e30u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x126e34: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126E34u;
    {
        const bool branch_taken_0x126e34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E34u;
        // 0x126e38: 0xa7bc2  srl         $t7, $t2, 15 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e34) {
            ctx->pc = 0x126E44u;
            goto label_126e44;
        }
    }
    ctx->pc = 0x126E3Cu;
    // 0x126e3c: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x126E3Cu;
    {
        const bool branch_taken_0x126e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E3Cu;
        // 0x126e40: 0x25ec0077  addiu       $t4, $t7, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e3c) {
            ctx->pc = 0x126D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126d80;
        }
    }
    ctx->pc = 0x126E44u;
label_126e44:
    // 0x126e44: 0x2dcf0555  sltiu       $t7, $t6, 0x555
    ctx->pc = 0x126e44u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x126e48: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126E48u;
    {
        const bool branch_taken_0x126e48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E48u;
        // 0x126e4c: 0xa7c82  srl         $t7, $t2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e48) {
            ctx->pc = 0x126E58u;
            goto label_126e58;
        }
    }
    ctx->pc = 0x126E50u;
    // 0x126e50: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x126E50u;
    {
        const bool branch_taken_0x126e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E50u;
        // 0x126e54: 0x25ec007c  addiu       $t4, $t7, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e50) {
            ctx->pc = 0x126D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126d80;
        }
    }
    ctx->pc = 0x126E58u;
label_126e58:
    // 0x126e58: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x126E58u;
    {
        const bool branch_taken_0x126e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E58u;
        // 0x126e5c: 0x240c007e  addiu       $t4, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e58) {
            ctx->pc = 0x126D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126d80;
        }
    }
    ctx->pc = 0x126E60u;
label_126e60:
    // 0x126e60: 0x1517823  subu        $t7, $t2, $s1
    ctx->pc = 0x126e60u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x126e64: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x126e64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126e68: 0x1000fec5  b           . + 4 + (-0x13B << 2)
    ctx->pc = 0x126E68u;
    {
        const bool branch_taken_0x126e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E68u;
        // 0x126e6c: 0xb583e  dsrl32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e68) {
            ctx->pc = 0x126980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126980;
        }
    }
    ctx->pc = 0x126E70u;
label_126e70:
    // 0x126e70: 0x117242  srl         $t6, $s1, 9
    ctx->pc = 0x126e70u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
    // 0x126e74: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x126E74u;
    {
        const bool branch_taken_0x126e74 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E74u;
        // 0x126e78: 0x1140c2  srl         $t0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e74) {
            ctx->pc = 0x126E8Cu;
            goto label_126e8c;
        }
    }
    ctx->pc = 0x126E7Cu;
    // 0x126e7c: 0x2dcf0005  sltiu       $t7, $t6, 0x5
    ctx->pc = 0x126e7cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x126e80: 0x11e00027  beqz        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x126E80u;
    {
        const bool branch_taken_0x126e80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E80u;
        // 0x126e84: 0x117982  srl         $t7, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e80) {
            ctx->pc = 0x126F20u;
            goto label_126f20;
        }
    }
    ctx->pc = 0x126E88u;
    // 0x126e88: 0x25e80038  addiu       $t0, $t7, 0x38
    ctx->pc = 0x126e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 56));
label_126e8c:
    // 0x126e8c: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x126e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x126e90: 0x870c0  sll         $t6, $t0, 3
    ctx->pc = 0x126e90u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x126e94: 0x268fbdf8  addiu       $t7, $s4, -0x4208
    ctx->pc = 0x126e94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950392));
    // 0x126e98: 0x1cf6821  addu        $t5, $t6, $t7
    ctx->pc = 0x126e98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x126e9c: 0x8db0000c  lw          $s0, 0xC($t5)
    ctx->pc = 0x126e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x126ea0: 0x520dfeaa  beql        $s0, $t5, . + 4 + (-0x156 << 2)
    ctx->pc = 0x126EA0u;
    {
        const bool branch_taken_0x126ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 13));
        if (branch_taken_0x126ea0) {
            ctx->pc = 0x126EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126EA0u;
            // 0x126ea4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12694Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12694c;
        }
    }
    ctx->pc = 0x126EA8u;
    // 0x126ea8: 0x240cfffc  addiu       $t4, $zero, -0x4
    ctx->pc = 0x126ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126eac: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x126eacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_126eb0:
    // 0x126eb0: 0x1ec5024  and         $t2, $t7, $t4
    ctx->pc = 0x126eb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x126eb4: 0x1517823  subu        $t7, $t2, $s1
    ctx->pc = 0x126eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x126eb8: 0x22a7023  subu        $t6, $s1, $t2
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x126ebc: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x126ebcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126ec0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x126ec0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x126ec4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x126ec4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x126ec8: 0x151782b  sltu        $t7, $t2, $s1
    ctx->pc = 0x126ec8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x126ecc: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x126ECCu;
    {
        const bool branch_taken_0x126ecc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ECCu;
        // 0x126ed0: 0xb583e  dsrl32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ecc) {
            ctx->pc = 0x126ED8u;
            goto label_126ed8;
        }
    }
    ctx->pc = 0x126ED4u;
    // 0x126ed4: 0xe582f  dsubu       $t3, $zero, $t6
    ctx->pc = 0x126ed4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 14));
label_126ed8:
    // 0x126ed8: 0x296f0010  slti        $t7, $t3, 0x10
    ctx->pc = 0x126ed8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x126edc: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x126EDCu;
    {
        const bool branch_taken_0x126edc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x126edc) {
            ctx->pc = 0x126EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126EDCu;
            // 0x126ee0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126EF8u;
            goto label_126ef8;
        }
    }
    ctx->pc = 0x126EE4u;
    // 0x126ee4: 0x5610006  bgez        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x126EE4u;
    {
        const bool branch_taken_0x126ee4 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x126EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EE4u;
        // 0x126ee8: 0x20a7021  addu        $t6, $s0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ee4) {
            ctx->pc = 0x126F00u;
            goto label_126f00;
        }
    }
    ctx->pc = 0x126EECu;
    // 0x126eec: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x126eecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126ef0: 0x560dffef  bnel        $s0, $t5, . + 4 + (-0x11 << 2)
    ctx->pc = 0x126EF0u;
    {
        const bool branch_taken_0x126ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 13));
        if (branch_taken_0x126ef0) {
            ctx->pc = 0x126EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126EF0u;
            // 0x126ef4: 0x8e0f0004  lw          $t7, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126EB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126eb0;
        }
    }
    ctx->pc = 0x126EF8u;
label_126ef8:
    // 0x126ef8: 0x1000fe94  b           . + 4 + (-0x16C << 2)
    ctx->pc = 0x126EF8u;
    {
        const bool branch_taken_0x126ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EF8u;
        // 0x126efc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ef8) {
            ctx->pc = 0x12694Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12694c;
        }
    }
    ctx->pc = 0x126F00u;
label_126f00:
    // 0x126f00: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x126f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126f04: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x126f04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x126f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f0c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x126f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126f10: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x126f10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x126f14: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x126f14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x126f18: 0x1000ff7c  b           . + 4 + (-0x84 << 2)
    ctx->pc = 0x126F18u;
    {
        const bool branch_taken_0x126f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F18u;
        // 0x126f1c: 0xadcf0004  sw          $t7, 0x4($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f18) {
            ctx->pc = 0x126D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126d0c;
        }
    }
    ctx->pc = 0x126F20u;
label_126f20:
    // 0x126f20: 0x2dcf0015  sltiu       $t7, $t6, 0x15
    ctx->pc = 0x126f20u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x126f24: 0x15e0ffd9  bnez        $t7, . + 4 + (-0x27 << 2)
    ctx->pc = 0x126F24u;
    {
        const bool branch_taken_0x126f24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F24u;
        // 0x126f28: 0x25c8005b  addiu       $t0, $t6, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f24) {
            ctx->pc = 0x126E8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126e8c;
        }
    }
    ctx->pc = 0x126F2Cu;
    // 0x126f2c: 0x2dcf0055  sltiu       $t7, $t6, 0x55
    ctx->pc = 0x126f2cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x126f30: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126F30u;
    {
        const bool branch_taken_0x126f30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F30u;
        // 0x126f34: 0x117b02  srl         $t7, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f30) {
            ctx->pc = 0x126F40u;
            goto label_126f40;
        }
    }
    ctx->pc = 0x126F38u;
    // 0x126f38: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x126F38u;
    {
        const bool branch_taken_0x126f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F38u;
        // 0x126f3c: 0x25e8006e  addiu       $t0, $t7, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f38) {
            ctx->pc = 0x126E8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126e8c;
        }
    }
    ctx->pc = 0x126F40u;
label_126f40:
    // 0x126f40: 0x2dcf0155  sltiu       $t7, $t6, 0x155
    ctx->pc = 0x126f40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x126f44: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126F44u;
    {
        const bool branch_taken_0x126f44 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F44u;
        // 0x126f48: 0x117bc2  srl         $t7, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f44) {
            ctx->pc = 0x126F54u;
            goto label_126f54;
        }
    }
    ctx->pc = 0x126F4Cu;
    // 0x126f4c: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x126F4Cu;
    {
        const bool branch_taken_0x126f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F4Cu;
        // 0x126f50: 0x25e80077  addiu       $t0, $t7, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f4c) {
            ctx->pc = 0x126E8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126e8c;
        }
    }
    ctx->pc = 0x126F54u;
label_126f54:
    // 0x126f54: 0x2dcf0555  sltiu       $t7, $t6, 0x555
    ctx->pc = 0x126f54u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x126f58: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126F58u;
    {
        const bool branch_taken_0x126f58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F58u;
        // 0x126f5c: 0x117c82  srl         $t7, $s1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f58) {
            ctx->pc = 0x126F68u;
            goto label_126f68;
        }
    }
    ctx->pc = 0x126F60u;
    // 0x126f60: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x126F60u;
    {
        const bool branch_taken_0x126f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F60u;
        // 0x126f64: 0x25e8007c  addiu       $t0, $t7, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f60) {
            ctx->pc = 0x126E8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126e8c;
        }
    }
    ctx->pc = 0x126F68u;
label_126f68:
    // 0x126f68: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x126F68u;
    {
        const bool branch_taken_0x126f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F68u;
        // 0x126f6c: 0x2408007e  addiu       $t0, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f68) {
            ctx->pc = 0x126E8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126e8c;
        }
    }
    ctx->pc = 0x126F70u;
label_126f70:
    // 0x126f70: 0x1000fe54  b           . + 4 + (-0x1AC << 2)
    ctx->pc = 0x126F70u;
    {
        const bool branch_taken_0x126f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F70u;
        // 0x126f74: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f70) {
            ctx->pc = 0x1268C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1268c4;
        }
    }
    ctx->pc = 0x126F78u;
}
