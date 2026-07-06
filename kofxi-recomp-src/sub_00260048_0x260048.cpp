#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00260048
// Address: 0x260048 - 0x260170
void sub_00260048_0x260048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260048_0x260048");
#endif

    switch (ctx->pc) {
        case 0x260084u: goto label_260084;
        case 0x2600e8u: goto label_2600e8;
        case 0x260130u: goto label_260130;
        case 0x260134u: goto label_260134;
        case 0x260140u: goto label_260140;
        default: break;
    }

    ctx->pc = 0x260048u;

    // 0x260048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26004c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x26004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x260050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x260050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x260054: 0x244517c0  addiu       $a1, $v0, 0x17C0
    ctx->pc = 0x260054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
    // 0x260058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26005c: 0xdc4717c0  ld          $a3, 0x17C0($v0)
    ctx->pc = 0x26005cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 6080)));
    // 0x260060: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x260060u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x260064: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x260064u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x260068: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x260068u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26006c: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x26006cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x260070: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x260070u;
    {
        const bool branch_taken_0x260070 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x260074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260070u;
            // 0x260074: 0x67182f  dsubu       $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260070) {
            ctx->pc = 0x260088u;
            goto label_260088;
        }
    }
    ctx->pc = 0x260078u;
    // 0x260078: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x260078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x26007c: 0x34424240  ori         $v0, $v0, 0x4240
    ctx->pc = 0x26007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
    // 0x260080: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x260080u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
label_260084:
    // 0x260084: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x260084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_260088:
    // 0x260088: 0x460002e  bltz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x260088u;
    {
        const bool branch_taken_0x260088 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26008Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260088u;
            // 0x26008c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260088) {
            ctx->pc = 0x260144u;
            goto label_260144;
        }
    }
    ctx->pc = 0x260090u;
    // 0x260090: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x260090u;
    {
        const bool branch_taken_0x260090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260090) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x260098u;
    // 0x260098: 0x18c0002a  blez        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x260098u;
    {
        const bool branch_taken_0x260098 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x260098) {
            ctx->pc = 0x260144u;
            goto label_260144;
        }
    }
    ctx->pc = 0x2600A0u;
label_2600a0:
    // 0x2600a0: 0x24020863  addiu       $v0, $zero, 0x863
    ctx->pc = 0x2600a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2147));
    // 0x2600a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2600a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2600a8: 0x34427bd0  ori         $v0, $v0, 0x7BD0
    ctx->pc = 0x2600a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31696);
    // 0x2600ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2600acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2600b0: 0x34425af6  ori         $v0, $v0, 0x5AF6
    ctx->pc = 0x2600b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23286);
    // 0x2600b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2600b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2600b8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2600B8u;
    {
        const bool branch_taken_0x2600b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2600BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2600B8u;
            // 0x2600bc: 0x31178  dsll        $v0, $v1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600b8) {
            ctx->pc = 0x2600F0u;
            goto label_2600f0;
        }
    }
    ctx->pc = 0x2600C0u;
    // 0x2600c0: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x2600c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2600c4: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2600c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2600c8: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x2600c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x2600cc: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x2600ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x2600d0: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x2600d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x2600d4: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x2600d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2600d8: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x2600d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x2600dc: 0x86202d  daddu       $a0, $a0, $a2
    ctx->pc = 0x2600dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2600e0: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x2600E0u;
    SET_GPR_U32(ctx, 31, 0x2600E8u);
    ctx->pc = 0x2600E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2600E0u;
            // 0x2600e4: 0x6484270f  daddiu      $a0, $a0, 0x270F (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)9999);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (runtime->hasFunction(0x1215E8u)) {
        auto targetFn = runtime->lookupFunction(0x1215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2600E8u; }
        if (ctx->pc != 0x2600E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001215E8_0x1215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2600E8u; }
        if (ctx->pc != 0x2600E8u) { return; }
    }
    ctx->pc = 0x2600E8u;
label_2600e8:
    // 0x2600e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2600E8u;
    {
        const bool branch_taken_0x2600e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2600E8u;
            // 0x2600ec: 0x64500001  daddiu      $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600e8) {
            ctx->pc = 0x260144u;
            goto label_260144;
        }
    }
    ctx->pc = 0x2600F0u;
label_2600f0:
    // 0x2600f0: 0x3c020147  lui         $v0, 0x147
    ctx->pc = 0x2600f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)327 << 16));
    // 0x2600f4: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x2600f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
    // 0x2600f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2600f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2600fc: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x2600fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x260100: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x260100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x260104: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x260104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x260108: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x260108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26010c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26010Cu;
    {
        const bool branch_taken_0x26010c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26010Cu;
            // 0x260110: 0x38078  dsll        $s0, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26010c) {
            ctx->pc = 0x26013Cu;
            goto label_26013c;
        }
    }
    ctx->pc = 0x260114u;
    // 0x260114: 0x64c4270f  daddiu      $a0, $a2, 0x270F
    ctx->pc = 0x260114u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)9999);
    // 0x260118: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x260118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x26011c: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x26011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x260120: 0x1080f8  dsll        $s0, $s0, 3
    ctx->pc = 0x260120u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 3);
    // 0x260124: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x260124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x260128: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x260128u;
    SET_GPR_U32(ctx, 31, 0x260130u);
    ctx->pc = 0x26012Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260128u;
            // 0x26012c: 0x1080b8  dsll        $s0, $s0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (runtime->hasFunction(0x1215E8u)) {
        auto targetFn = runtime->lookupFunction(0x1215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260130u; }
        if (ctx->pc != 0x260130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001215E8_0x1215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260130u; }
        if (ctx->pc != 0x260130u) { return; }
    }
    ctx->pc = 0x260130u;
label_260130:
    // 0x260130: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x260130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_260134:
    // 0x260134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260134u;
    {
        const bool branch_taken_0x260134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260134u;
            // 0x260138: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260134) {
            ctx->pc = 0x260144u;
            goto label_260144;
        }
    }
    ctx->pc = 0x26013Cu;
label_26013c:
    // 0x26013c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x26013cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_260140:
    // 0x260140: 0x10807a  dsrl        $s0, $s0, 1
    ctx->pc = 0x260140u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 1);
label_260144:
    // 0x260144: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x260144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x260148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x260148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26014c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26014cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260150: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x260150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x260154: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x260154u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x260158: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x260158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x26015c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26015cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x260160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260164: 0x3e00008  jr          $ra
    ctx->pc = 0x260164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260164u;
            // 0x260168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26016Cu;
    // 0x26016c: 0x0  nop
    ctx->pc = 0x26016cu;
    // NOP
    ctx->pc = 0x260170u;
}
