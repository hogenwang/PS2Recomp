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

// Function: sub_00305090
// Address: 0x305090 - 0x3054d0
void sub_00305090_0x305090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305090_0x305090");
#endif

    switch (ctx->pc) {
        case 0x3051f0u: goto label_3051f0;
        case 0x30534cu: goto label_30534c;
        case 0x305370u: goto label_305370;
        case 0x305380u: goto label_305380;
        case 0x305460u: goto label_305460;
        case 0x305474u: goto label_305474;
        case 0x305490u: goto label_305490;
        case 0x3054a0u: goto label_3054a0;
        default: break;
    }

    ctx->pc = 0x305090u;

    // 0x305090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x305090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x305094: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x305094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x305098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x305098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30509c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3050a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3050a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3050a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3050a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3050a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3050a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3050ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3050acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3050b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3050b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3050b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3050b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3050b8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3050b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3050bc: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x3050bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3050c0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3050c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3050c4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3050c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3050c8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3050c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3050cc: 0x12020043  beq         $s0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3050CCu;
    {
        const bool branch_taken_0x3050cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3050D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050CCu;
        // 0x3050d0: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050cc) {
            ctx->pc = 0x3051DCu;
            goto label_3051dc;
        }
    }
    ctx->pc = 0x3050D4u;
    // 0x3050d4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3050d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3050d8: 0x5202003e  beql        $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3050D8u;
    {
        const bool branch_taken_0x3050d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3050d8) {
            ctx->pc = 0x3050DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3050D8u;
            // 0x3050dc: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3051D4u;
            goto label_3051d4;
        }
    }
    ctx->pc = 0x3050E0u;
    // 0x3050e0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3050e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3050e4: 0x52020039  beql        $s0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3050E4u;
    {
        const bool branch_taken_0x3050e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3050e4) {
            ctx->pc = 0x3050E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3050E4u;
            // 0x3050e8: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3051CCu;
            goto label_3051cc;
        }
    }
    ctx->pc = 0x3050ECu;
    // 0x3050ec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3050ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3050f0: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3050F0u;
    {
        const bool branch_taken_0x3050f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3050f0) {
            ctx->pc = 0x3051C8u;
            goto label_3051c8;
        }
    }
    ctx->pc = 0x3050F8u;
    // 0x3050f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3050f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3050fc: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3050FCu;
    {
        const bool branch_taken_0x3050fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3050fc) {
            ctx->pc = 0x3051C8u;
            goto label_3051c8;
        }
    }
    ctx->pc = 0x305104u;
    // 0x305104: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x305104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x305108: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x305108u;
    {
        const bool branch_taken_0x305108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305108) {
            ctx->pc = 0x3051C8u;
            goto label_3051c8;
        }
    }
    ctx->pc = 0x305110u;
    // 0x305110: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x305110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x305114: 0x5202002a  beql        $s0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x305114u;
    {
        const bool branch_taken_0x305114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305114) {
            ctx->pc = 0x305118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305114u;
            // 0x305118: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3051C0u;
            goto label_3051c0;
        }
    }
    ctx->pc = 0x30511Cu;
    // 0x30511c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x30511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x305120: 0x52020025  beql        $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x305120u;
    {
        const bool branch_taken_0x305120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305120) {
            ctx->pc = 0x305124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305120u;
            // 0x305124: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3051B8u;
            goto label_3051b8;
        }
    }
    ctx->pc = 0x305128u;
    // 0x305128: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x305128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x30512c: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30512Cu;
    {
        const bool branch_taken_0x30512c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30512c) {
            ctx->pc = 0x3051B4u;
            goto label_3051b4;
        }
    }
    ctx->pc = 0x305134u;
    // 0x305134: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x305134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x305138: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x305138u;
    {
        const bool branch_taken_0x305138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305138) {
            ctx->pc = 0x3051B4u;
            goto label_3051b4;
        }
    }
    ctx->pc = 0x305140u;
    // 0x305140: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x305140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x305144: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x305144u;
    {
        const bool branch_taken_0x305144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305144) {
            ctx->pc = 0x3051B4u;
            goto label_3051b4;
        }
    }
    ctx->pc = 0x30514Cu;
    // 0x30514c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x305150: 0x52020016  beql        $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x305150u;
    {
        const bool branch_taken_0x305150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305150) {
            ctx->pc = 0x305154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305150u;
            // 0x305154: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3051ACu;
            goto label_3051ac;
        }
    }
    ctx->pc = 0x305158u;
    // 0x305158: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x305158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x30515c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30515Cu;
    {
        const bool branch_taken_0x30515c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30515c) {
            ctx->pc = 0x3051A8u;
            goto label_3051a8;
        }
    }
    ctx->pc = 0x305164u;
    // 0x305164: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x305164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x305168: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x305168u;
    {
        const bool branch_taken_0x305168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305168) {
            ctx->pc = 0x3051A8u;
            goto label_3051a8;
        }
    }
    ctx->pc = 0x305170u;
    // 0x305170: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x305170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x305174: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x305174u;
    {
        const bool branch_taken_0x305174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305174) {
            ctx->pc = 0x3051A8u;
            goto label_3051a8;
        }
    }
    ctx->pc = 0x30517Cu;
    // 0x30517c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x30517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x305180: 0x52020007  beql        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305180u;
    {
        const bool branch_taken_0x305180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305180) {
            ctx->pc = 0x305184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305180u;
            // 0x305184: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3051A0u;
            goto label_3051a0;
        }
    }
    ctx->pc = 0x305188u;
    // 0x305188: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x305188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30518c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30518Cu;
    {
        const bool branch_taken_0x30518c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30518c) {
            ctx->pc = 0x30519Cu;
            goto label_30519c;
        }
    }
    ctx->pc = 0x305194u;
    // 0x305194: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x305194u;
    {
        const bool branch_taken_0x305194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305194) {
            ctx->pc = 0x3051E8u;
            goto label_3051e8;
        }
    }
    ctx->pc = 0x30519Cu;
label_30519c:
    // 0x30519c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x30519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3051a0:
    // 0x3051a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3051A0u;
    {
        const bool branch_taken_0x3051a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051A0u;
        // 0x3051a4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051a0) {
            ctx->pc = 0x3051F0u;
            goto label_3051f0;
        }
    }
    ctx->pc = 0x3051A8u;
label_3051a8:
    // 0x3051a8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3051ac:
    // 0x3051ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3051ACu;
    {
        const bool branch_taken_0x3051ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051ACu;
        // 0x3051b0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051ac) {
            ctx->pc = 0x3051F0u;
            goto label_3051f0;
        }
    }
    ctx->pc = 0x3051B4u;
label_3051b4:
    // 0x3051b4: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3051b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3051b8:
    // 0x3051b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3051B8u;
    {
        const bool branch_taken_0x3051b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051B8u;
        // 0x3051bc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051b8) {
            ctx->pc = 0x3051F0u;
            goto label_3051f0;
        }
    }
    ctx->pc = 0x3051C0u;
label_3051c0:
    // 0x3051c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3051C0u;
    {
        const bool branch_taken_0x3051c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051C0u;
        // 0x3051c4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051c0) {
            ctx->pc = 0x3051F0u;
            goto label_3051f0;
        }
    }
    ctx->pc = 0x3051C8u;
label_3051c8:
    // 0x3051c8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3051c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3051cc:
    // 0x3051cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3051CCu;
    {
        const bool branch_taken_0x3051cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051CCu;
        // 0x3051d0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051cc) {
            ctx->pc = 0x3051F0u;
            goto label_3051f0;
        }
    }
    ctx->pc = 0x3051D4u;
label_3051d4:
    // 0x3051d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3051D4u;
    {
        const bool branch_taken_0x3051d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051D4u;
        // 0x3051d8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051d4) {
            ctx->pc = 0x3051F0u;
            goto label_3051f0;
        }
    }
    ctx->pc = 0x3051DCu;
label_3051dc:
    // 0x3051dc: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3051dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3051e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3051E0u;
    {
        const bool branch_taken_0x3051e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051E0u;
        // 0x3051e4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051e0) {
            ctx->pc = 0x3051F0u;
            goto label_3051f0;
        }
    }
    ctx->pc = 0x3051E8u;
label_3051e8:
    // 0x3051e8: 0xc068158  jal         func_1A0560
    ctx->pc = 0x3051E8u;
    SET_GPR_U32(ctx, 31, 0x3051F0u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x3051E8u, 0x3051F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051F0u;
label_3051f0:
    // 0x3051f0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3051f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3051f4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x3051f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3051f8: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3051f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3051fc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x3051fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x305200: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x305200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x305204: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x305204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x305208: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x305208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x30520c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x30520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x305210: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x305210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x305214: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x305214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x305218: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x305218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x30521c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x30521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x305220: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x305220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x305224: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x305224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x305228: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x305228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x30522c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x30522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x305230: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x305230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x305234: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x305234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x305238: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x305238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x30523c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x30523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x305240: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x305240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x305244: 0x86230038  lh          $v1, 0x38($s1)
    ctx->pc = 0x305244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x305248: 0xa6430038  sh          $v1, 0x38($s2)
    ctx->pc = 0x305248u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x30524c: 0x8623003a  lh          $v1, 0x3A($s1)
    ctx->pc = 0x30524cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x305250: 0xa643003a  sh          $v1, 0x3A($s2)
    ctx->pc = 0x305250u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x305254: 0x9223003c  lbu         $v1, 0x3C($s1)
    ctx->pc = 0x305254u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x305258: 0xa243003c  sb          $v1, 0x3C($s2)
    ctx->pc = 0x305258u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x30525c: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x30525cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
    // 0x305260: 0x12020047  beq         $s0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x305260u;
    {
        const bool branch_taken_0x305260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x305264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305260u;
        // 0x305264: 0xa243003d  sb          $v1, 0x3D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305260) {
            ctx->pc = 0x305380u;
            goto label_305380;
        }
    }
    ctx->pc = 0x305268u;
    // 0x305268: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x305268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x30526c: 0x5202003a  beql        $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x30526Cu;
    {
        const bool branch_taken_0x30526c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30526c) {
            ctx->pc = 0x305270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30526Cu;
            // 0x305270: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305358u;
            goto label_305358;
        }
    }
    ctx->pc = 0x305274u;
    // 0x305274: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x305274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x305278: 0x12020036  beq         $s0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x305278u;
    {
        const bool branch_taken_0x305278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305278) {
            ctx->pc = 0x305354u;
            goto label_305354;
        }
    }
    ctx->pc = 0x305280u;
    // 0x305280: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x305280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x305284: 0x12020033  beq         $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x305284u;
    {
        const bool branch_taken_0x305284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305284) {
            ctx->pc = 0x305354u;
            goto label_305354;
        }
    }
    ctx->pc = 0x30528Cu;
    // 0x30528c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x30528cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x305290: 0x52020028  beql        $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x305290u;
    {
        const bool branch_taken_0x305290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305290) {
            ctx->pc = 0x305294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305290u;
            // 0x305294: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305334u;
            goto label_305334;
        }
    }
    ctx->pc = 0x305298u;
    // 0x305298: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x305298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x30529c: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x30529Cu;
    {
        const bool branch_taken_0x30529c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30529c) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x3052A4u;
    // 0x3052a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3052a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3052a8: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3052A8u;
    {
        const bool branch_taken_0x3052a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3052a8) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x3052B0u;
    // 0x3052b0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3052b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3052b4: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3052B4u;
    {
        const bool branch_taken_0x3052b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3052b4) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x3052BCu;
    // 0x3052bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3052bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3052c0: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3052C0u;
    {
        const bool branch_taken_0x3052c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3052c0) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x3052C8u;
    // 0x3052c8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3052c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x3052cc: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3052CCu;
    {
        const bool branch_taken_0x3052cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3052cc) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x3052D4u;
    // 0x3052d4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3052d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3052d8: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3052D8u;
    {
        const bool branch_taken_0x3052d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3052d8) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x3052E0u;
    // 0x3052e0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3052e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3052e4: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3052E4u;
    {
        const bool branch_taken_0x3052e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3052e4) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x3052ECu;
    // 0x3052ec: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x3052ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3052f0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3052F0u;
    {
        const bool branch_taken_0x3052f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3052f0) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x3052F8u;
    // 0x3052f8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x3052f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3052fc: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3052FCu;
    {
        const bool branch_taken_0x3052fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3052fc) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x305304u;
    // 0x305304: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x305304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x305308: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x305308u;
    {
        const bool branch_taken_0x305308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305308) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x305310u;
    // 0x305310: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x305310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x305314: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x305314u;
    {
        const bool branch_taken_0x305314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305314) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x30531Cu;
    // 0x30531c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x30531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305320: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305320u;
    {
        const bool branch_taken_0x305320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305320) {
            ctx->pc = 0x305330u;
            goto label_305330;
        }
    }
    ctx->pc = 0x305328u;
    // 0x305328: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x305328u;
    {
        const bool branch_taken_0x305328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305328) {
            ctx->pc = 0x305378u;
            goto label_305378;
        }
    }
    ctx->pc = 0x305330u;
label_305330:
    // 0x305330: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x305330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_305334:
    // 0x305334: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x305334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x305338: 0x244236e8  addiu       $v0, $v0, 0x36E8
    ctx->pc = 0x305338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14056));
    // 0x30533c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30533Cu;
    {
        const bool branch_taken_0x30533c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30533c) {
            ctx->pc = 0x305340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30533Cu;
            // 0x305340: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305384u;
            goto label_305384;
        }
    }
    ctx->pc = 0x305344u;
    // 0x305344: 0xc068158  jal         func_1A0560
    ctx->pc = 0x305344u;
    SET_GPR_U32(ctx, 31, 0x30534Cu);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x305344u, 0x30534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30534Cu;
label_30534c:
    // 0x30534c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30534Cu;
    {
        const bool branch_taken_0x30534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30534c) {
            ctx->pc = 0x305380u;
            goto label_305380;
        }
    }
    ctx->pc = 0x305354u;
label_305354:
    // 0x305354: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x305354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_305358:
    // 0x305358: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x305358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x30535c: 0x24420a18  addiu       $v0, $v0, 0xA18
    ctx->pc = 0x30535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2584));
    // 0x305360: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305360u;
    {
        const bool branch_taken_0x305360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305360) {
            ctx->pc = 0x305380u;
            goto label_305380;
        }
    }
    ctx->pc = 0x305368u;
    // 0x305368: 0xc068158  jal         func_1A0560
    ctx->pc = 0x305368u;
    SET_GPR_U32(ctx, 31, 0x305370u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x305368u, 0x305370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305370u;
label_305370:
    // 0x305370: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305370u;
    {
        const bool branch_taken_0x305370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305370) {
            ctx->pc = 0x305380u;
            goto label_305380;
        }
    }
    ctx->pc = 0x305378u;
label_305378:
    // 0x305378: 0xc068158  jal         func_1A0560
    ctx->pc = 0x305378u;
    SET_GPR_U32(ctx, 31, 0x305380u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x305378u, 0x305380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305380u;
label_305380:
    // 0x305380: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x305380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_305384:
    // 0x305384: 0x52020047  beql        $s0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x305384u;
    {
        const bool branch_taken_0x305384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305384) {
            ctx->pc = 0x305388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305384u;
            // 0x305388: 0x3c03a5a5  lui         $v1, 0xA5A5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42405 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3054A4u;
            goto label_3054a4;
        }
    }
    ctx->pc = 0x30538Cu;
    // 0x30538c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x30538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x305390: 0x5202003b  beql        $s0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x305390u;
    {
        const bool branch_taken_0x305390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305390) {
            ctx->pc = 0x305394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305390u;
            // 0x305394: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305480u;
            goto label_305480;
        }
    }
    ctx->pc = 0x305398u;
    // 0x305398: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x305398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x30539c: 0x12020037  beq         $s0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x30539Cu;
    {
        const bool branch_taken_0x30539c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30539c) {
            ctx->pc = 0x30547Cu;
            goto label_30547c;
        }
    }
    ctx->pc = 0x3053A4u;
    // 0x3053a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3053a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3053a8: 0x12020034  beq         $s0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3053A8u;
    {
        const bool branch_taken_0x3053a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053a8) {
            ctx->pc = 0x30547Cu;
            goto label_30547c;
        }
    }
    ctx->pc = 0x3053B0u;
    // 0x3053b0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3053b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3053b4: 0x52020028  beql        $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3053B4u;
    {
        const bool branch_taken_0x3053b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053b4) {
            ctx->pc = 0x3053B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3053B4u;
            // 0x3053b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305458u;
            goto label_305458;
        }
    }
    ctx->pc = 0x3053BCu;
    // 0x3053bc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3053bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3053c0: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3053C0u;
    {
        const bool branch_taken_0x3053c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053c0) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x3053C8u;
    // 0x3053c8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3053c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3053cc: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3053CCu;
    {
        const bool branch_taken_0x3053cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053cc) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x3053D4u;
    // 0x3053d4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3053d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3053d8: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3053D8u;
    {
        const bool branch_taken_0x3053d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053d8) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x3053E0u;
    // 0x3053e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3053e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3053e4: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3053E4u;
    {
        const bool branch_taken_0x3053e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053e4) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x3053ECu;
    // 0x3053ec: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3053ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x3053f0: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3053F0u;
    {
        const bool branch_taken_0x3053f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053f0) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x3053F8u;
    // 0x3053f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3053f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3053fc: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3053FCu;
    {
        const bool branch_taken_0x3053fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053fc) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x305404u;
    // 0x305404: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x305404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x305408: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x305408u;
    {
        const bool branch_taken_0x305408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305408) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x305410u;
    // 0x305410: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x305410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x305414: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x305414u;
    {
        const bool branch_taken_0x305414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305414) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x30541Cu;
    // 0x30541c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x30541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x305420: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x305420u;
    {
        const bool branch_taken_0x305420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305420) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x305428u;
    // 0x305428: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x305428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x30542c: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30542Cu;
    {
        const bool branch_taken_0x30542c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30542c) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x305434u;
    // 0x305434: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x305434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x305438: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x305438u;
    {
        const bool branch_taken_0x305438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305438) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x305440u;
    // 0x305440: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x305440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305444: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305444u;
    {
        const bool branch_taken_0x305444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x305444) {
            ctx->pc = 0x305454u;
            goto label_305454;
        }
    }
    ctx->pc = 0x30544Cu;
    // 0x30544c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30544Cu;
    {
        const bool branch_taken_0x30544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30544c) {
            ctx->pc = 0x305498u;
            goto label_305498;
        }
    }
    ctx->pc = 0x305454u;
label_305454:
    // 0x305454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305458:
    // 0x305458: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x305458u;
    SET_GPR_U32(ctx, 31, 0x305460u);
    ctx->pc = 0x18DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DA90u, 0x305458u, 0x305460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305460u;
label_305460:
    // 0x305460: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x305460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x305464: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x305464u;
    {
        const bool branch_taken_0x305464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305464) {
            ctx->pc = 0x3054A0u;
            goto label_3054a0;
        }
    }
    ctx->pc = 0x30546Cu;
    // 0x30546c: 0xc068158  jal         func_1A0560
    ctx->pc = 0x30546Cu;
    SET_GPR_U32(ctx, 31, 0x305474u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x30546Cu, 0x305474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305474u;
label_305474:
    // 0x305474: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x305474u;
    {
        const bool branch_taken_0x305474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305474) {
            ctx->pc = 0x3054A0u;
            goto label_3054a0;
        }
    }
    ctx->pc = 0x30547Cu;
label_30547c:
    // 0x30547c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_305480:
    // 0x305480: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305480u;
    {
        const bool branch_taken_0x305480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305480) {
            ctx->pc = 0x3054A0u;
            goto label_3054a0;
        }
    }
    ctx->pc = 0x305488u;
    // 0x305488: 0xc068158  jal         func_1A0560
    ctx->pc = 0x305488u;
    SET_GPR_U32(ctx, 31, 0x305490u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x305488u, 0x305490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305490u;
label_305490:
    // 0x305490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305490u;
    {
        const bool branch_taken_0x305490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305490) {
            ctx->pc = 0x3054A0u;
            goto label_3054a0;
        }
    }
    ctx->pc = 0x305498u;
label_305498:
    // 0x305498: 0xc068158  jal         func_1A0560
    ctx->pc = 0x305498u;
    SET_GPR_U32(ctx, 31, 0x3054A0u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x305498u, 0x3054A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054A0u;
label_3054a0:
    // 0x3054a0: 0x3c03a5a5  lui         $v1, 0xA5A5
    ctx->pc = 0x3054a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42405 << 16));
label_3054a4:
    // 0x3054a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3054a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3054a8: 0x3463f00f  ori         $v1, $v1, 0xF00F
    ctx->pc = 0x3054a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61455);
    // 0x3054ac: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x3054acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x3054b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3054b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3054b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3054b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3054b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3054b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3054bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3054bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3054c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3054c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3054c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3054C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3054C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054C4u;
        // 0x3054c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3054C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3054CCu;
    // 0x3054cc: 0x0  nop
    ctx->pc = 0x3054ccu;
    // NOP
}
