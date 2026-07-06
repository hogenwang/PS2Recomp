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

// Function: sub_002C9F90
// Address: 0x2c9f90 - 0x2ca2a8
void sub_002C9F90_0x2c9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9F90_0x2c9f90");
#endif

    switch (ctx->pc) {
        case 0x2c9f98u: goto label_2c9f98;
        case 0x2ca010u: goto label_2ca010;
        case 0x2ca028u: goto label_2ca028;
        case 0x2ca044u: goto label_2ca044;
        case 0x2ca078u: goto label_2ca078;
        case 0x2ca09cu: goto label_2ca09c;
        case 0x2ca0c8u: goto label_2ca0c8;
        case 0x2ca140u: goto label_2ca140;
        case 0x2ca180u: goto label_2ca180;
        case 0x2ca1a8u: goto label_2ca1a8;
        case 0x2ca238u: goto label_2ca238;
        case 0x2ca264u: goto label_2ca264;
        default: break;
    }

    ctx->pc = 0x2c9f90u;

label_2c9f90:
    // 0x2c9f90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c9f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c9f94: 0x24030103  addiu       $v1, $zero, 0x103
    ctx->pc = 0x2c9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2c9f98:
    // 0x2c9f98: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2c9f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2c9f9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c9f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fa0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c9fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c9fa4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c9fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c9fa8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2c9fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2c9fac: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2c9facu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fb0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2c9fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2c9fb4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2c9fb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fb8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2c9fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2c9fbc: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x2c9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x2c9fc0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2c9fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2c9fc4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2c9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2c9fc8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2c9fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2c9fcc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2c9fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2c9fd0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2c9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2c9fd4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2c9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2c9fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9fdc: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x2c9fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9fe0: 0x256a021  addu        $s4, $s2, $s6
    ctx->pc = 0x2c9fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2c9fe4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2c9fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c9fe8: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2c9fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x2c9fec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2c9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c9ff0: 0x1443004b  bne         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2C9FF0u;
    {
        const bool branch_taken_0x2c9ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FF0u;
        // 0x2c9ff4: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ff0) {
            ctx->pc = 0x2CA120u;
            goto label_2ca120;
        }
    }
    ctx->pc = 0x2C9FF8u;
    // 0x2c9ff8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9ffc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ca000: 0x24458548  addiu       $a1, $v0, -0x7AB8
    ctx->pc = 0x2ca000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935880));
    // 0x2ca004: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x2ca004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ca008: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x2ca008u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ca00c: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x2ca00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_2ca010:
    // 0x2ca010: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ca010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca014: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ca014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca018: 0x1085003b  beq         $a0, $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2CA018u;
    {
        const bool branch_taken_0x2ca018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA018u;
        // 0x2ca01c: 0x3d7a821  addu        $s5, $fp, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca018) {
            ctx->pc = 0x2CA108u;
            goto label_2ca108;
        }
    }
    ctx->pc = 0x2CA020u;
    // 0x2ca020: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2ca020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca024: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2ca024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ca028:
    // 0x2ca028: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ca028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca02c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ca02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca030: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ca030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca034: 0x2e63023  subu        $a2, $s7, $a2
    ctx->pc = 0x2ca034u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x2ca038: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x2ca038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ca03c: 0xc0b27e4  jal         func_2C9F90
    ctx->pc = 0x2CA03Cu;
    SET_GPR_U32(ctx, 31, 0x2CA044u);
    ctx->pc = 0x2CA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA03Cu;
    // 0x2ca040: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9F90u;
    goto label_2c9f90;
    ctx->pc = 0x2CA044u;
label_2ca044:
    // 0x2ca044: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2ca044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ca048: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ca048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ca04c: 0x24438549  addiu       $v1, $v0, -0x7AB7
    ctx->pc = 0x2ca04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935881));
    // 0x2ca050: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ca050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ca054: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CA054u;
    {
        const bool branch_taken_0x2ca054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA054u;
        // 0x2ca058: 0x27a40008  addiu       $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca054) {
            ctx->pc = 0x2CA0C8u;
            goto label_2ca0c8;
        }
    }
    ctx->pc = 0x2CA05Cu;
    // 0x2ca05c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2ca05cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca060: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ca060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca064: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ca064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca068: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x2ca068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ca06c: 0x2073823  subu        $a3, $s0, $a3
    ctx->pc = 0x2ca06cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2ca070: 0xc0b28aa  jal         func_2CA2A8
    ctx->pc = 0x2CA070u;
    SET_GPR_U32(ctx, 31, 0x2CA078u);
    ctx->pc = 0x2CA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA070u;
    // 0x2ca074: 0x2052823  subu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x2CA070u, 0x2CA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA078u;
label_2ca078:
    // 0x2ca078: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ca078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca07c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA07Cu;
    {
        const bool branch_taken_0x2ca07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA07Cu;
        // 0x2ca080: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca07c) {
            ctx->pc = 0x2CA0C8u;
            goto label_2ca0c8;
        }
    }
    ctx->pc = 0x2CA084u;
    // 0x2ca084: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ca084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca088: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ca088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca08c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ca08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ca090: 0x2a52823  subu        $a1, $s5, $a1
    ctx->pc = 0x2ca090u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2ca094: 0xc0b60a2  jal         func_2D8288
    ctx->pc = 0x2CA094u;
    SET_GPR_U32(ctx, 31, 0x2CA09Cu);
    ctx->pc = 0x2CA098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA094u;
    // 0x2ca098: 0x2a42023  subu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8288u, 0x2CA094u, 0x2CA09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA09Cu;
label_2ca09c:
    // 0x2ca09c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ca09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca0a0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ca0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca0a4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ca0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2ca0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca0ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ca0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0b0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2ca0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ca0b4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x2ca0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ca0b8: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x2ca0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2ca0bc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2ca0bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0c0: 0xc0b27e4  jal         func_2C9F90
    ctx->pc = 0x2CA0C0u;
    SET_GPR_U32(ctx, 31, 0x2CA0C8u);
    ctx->pc = 0x2CA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0C0u;
    // 0x2ca0c4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9F90u;
    goto label_2c9f90;
    ctx->pc = 0x2CA0C8u;
label_2ca0c8:
    // 0x2ca0c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ca0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ca0cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ca0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca0d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ca0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca0d4: 0x24468548  addiu       $a2, $v0, -0x7AB8
    ctx->pc = 0x2ca0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935880));
    // 0x2ca0d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ca0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ca0dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ca0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ca0e0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2ca0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ca0e4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2ca0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2ca0e8: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x2ca0e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ca0ec: 0x2562021  addu        $a0, $s2, $s6
    ctx->pc = 0x2ca0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2ca0f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ca0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ca0f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ca0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca0f8: 0x5466ffcb  bnel        $v1, $a2, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2CA0F8u;
    {
        const bool branch_taken_0x2ca0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2ca0f8) {
            ctx->pc = 0x2CA0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA0F8u;
            // 0x2ca0fc: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2CA100u;
    // 0x2ca100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA100u;
    {
        const bool branch_taken_0x2ca100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA100u;
        // 0x2ca104: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca100) {
            ctx->pc = 0x2CA10Cu;
            goto label_2ca10c;
        }
    }
    ctx->pc = 0x2CA108u;
label_2ca108:
    // 0x2ca108: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ca108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca10c:
    // 0x2ca10c: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x2ca10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ca110: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2ca110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ca114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca118: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2CA118u;
    {
        const bool branch_taken_0x2ca118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA118u;
        // 0x2ca11c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca118) {
            ctx->pc = 0x2CA210u;
            goto label_2ca210;
        }
    }
    ctx->pc = 0x2CA120u;
label_2ca120:
    // 0x2ca120: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2ca120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ca124: 0x3d7a821  addu        $s5, $fp, $s7
    ctx->pc = 0x2ca124u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2ca128: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ca128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ca12c: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x2ca12cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca130: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ca130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca134: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x2ca134u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2ca138: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CA138u;
    SET_GPR_U32(ctx, 31, 0x2CA140u);
    ctx->pc = 0x2CA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA138u;
    // 0x2ca13c: 0x8fb10010  lw          $s1, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2CA138u, 0x2CA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA140u;
label_2ca140:
    // 0x2ca140: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2ca140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ca144: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ca144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca148: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ca148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ca14c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca150: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2ca150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2ca154: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ca154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca158: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CA158u;
    {
        const bool branch_taken_0x2ca158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca158) {
            ctx->pc = 0x2CA15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA158u;
            // 0x2ca15c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA1E0u;
            goto label_2ca1e0;
        }
    }
    ctx->pc = 0x2CA160u;
    // 0x2ca160: 0x8e83fffc  lw          $v1, -0x4($s4)
    ctx->pc = 0x2ca160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967292)));
    // 0x2ca164: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ca164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ca168: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2ca168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2ca16c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CA16Cu;
    {
        const bool branch_taken_0x2ca16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA16Cu;
        // 0x2ca170: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca16c) {
            ctx->pc = 0x2CA1E0u;
            goto label_2ca1e0;
        }
    }
    ctx->pc = 0x2CA174u;
    // 0x2ca174: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2ca174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca178: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x2ca178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x2ca17c: 0x0  nop
    ctx->pc = 0x2ca17cu;
    // NOP
label_2ca180:
    // 0x2ca180: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ca180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca184: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca188: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x2ca188u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x2ca18c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ca18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ca190: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2ca190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca194: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2ca194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ca198: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ca198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca19c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2ca19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ca1a0: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CA1A0u;
    SET_GPR_U32(ctx, 31, 0x2CA1A8u);
    ctx->pc = 0x2CA1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1A0u;
    // 0x2ca1a4: 0x2e42023  subu        $a0, $s7, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2CA1A0u, 0x2CA1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1A8u;
label_2ca1a8:
    // 0x2ca1a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ca1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca1ac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ca1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca1b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ca1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ca1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca1b8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA1B8u;
    {
        const bool branch_taken_0x2ca1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1B8u;
        // 0x2ca1bc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1b8) {
            ctx->pc = 0x2CA1E0u;
            goto label_2ca1e0;
        }
    }
    ctx->pc = 0x2CA1C0u;
    // 0x2ca1c0: 0x8e03fffc  lw          $v1, -0x4($s0)
    ctx->pc = 0x2ca1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x2ca1c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ca1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ca1c8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2ca1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2ca1cc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2CA1CCu;
    {
        const bool branch_taken_0x2ca1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1CCu;
        // 0x2ca1d0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1cc) {
            ctx->pc = 0x2CA180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca180;
        }
    }
    ctx->pc = 0x2CA1D4u;
    // 0x2ca1d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA1D4u;
    {
        const bool branch_taken_0x2ca1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1D4u;
        // 0x2ca1d8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1d4) {
            ctx->pc = 0x2CA1E4u;
            goto label_2ca1e4;
        }
    }
    ctx->pc = 0x2CA1DCu;
    // 0x2ca1dc: 0x0  nop
    ctx->pc = 0x2ca1dcu;
    // NOP
label_2ca1e0:
    // 0x2ca1e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ca1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca1e4:
    // 0x2ca1e4: 0x2562021  addu        $a0, $s2, $s6
    ctx->pc = 0x2ca1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2ca1e8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2ca1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ca1ec: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x2ca1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ca1f0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2ca1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ca1f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca1f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ca1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ca1fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ca1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ca200: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ca200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ca204: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x2ca204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x2ca208: 0x1045001b  beq         $v0, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CA208u;
    {
        const bool branch_taken_0x2ca208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA208u;
        // 0x2ca20c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca208) {
            ctx->pc = 0x2CA278u;
            goto label_2ca278;
        }
    }
    ctx->pc = 0x2CA210u;
label_2ca210:
    // 0x2ca210: 0x2568021  addu        $s0, $s2, $s6
    ctx->pc = 0x2ca210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2ca214: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x2ca214u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca218: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca21c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ca21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ca220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ca224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca228: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x2ca228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ca22c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ca22cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca230: 0xc0b3a3a  jal         func_2CE8E8
    ctx->pc = 0x2CA230u;
    SET_GPR_U32(ctx, 31, 0x2CA238u);
    ctx->pc = 0x2CA234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA230u;
    // 0x2ca234: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE8E8u, 0x2CA230u, 0x2CA238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA238u;
label_2ca238:
    // 0x2ca238: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ca238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca23c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca240: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ca240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca244: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ca244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca248: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2ca248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca24c: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x2ca24cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ca250: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ca250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca254: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2ca254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ca258: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2ca258u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ca25c: 0xc0b3a3a  jal         func_2CE8E8
    ctx->pc = 0x2CA25Cu;
    SET_GPR_U32(ctx, 31, 0x2CA264u);
    ctx->pc = 0x2CA260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA25Cu;
    // 0x2ca260: 0x2a42023  subu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE8E8u, 0x2CA25Cu, 0x2CA264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA264u;
label_2ca264:
    // 0x2ca264: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ca264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca268: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ca268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca26c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ca26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca270: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2ca270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2ca274: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ca274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca278:
    // 0x2ca278: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ca278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ca27c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ca27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca280: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ca280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ca284: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ca284u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca288: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2ca288u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca28c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2ca28cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca290: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2ca290u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ca294: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2ca294u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca298: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2ca298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ca29c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA29Cu;
        // 0x2ca2a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA2A4u;
    // 0x2ca2a4: 0x0  nop
    ctx->pc = 0x2ca2a4u;
    // NOP
    if (ctx->pc == 0x2ca2a4u) { ctx->pc = 0x2ca2a8u; }
}
